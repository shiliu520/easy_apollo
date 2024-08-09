#!/usr/bin/python3.6
# encoding=utf-8
"""
python tools/plot_log.py -f /apollo/data/log/planning.INFO -t 11:50:34
"""

import argparse
from collections import defaultdict
import os
import re
import shutil
import sys
import time
import math
import datetime
import matplotlib.pyplot as plt
from matplotlib.widgets import Button
from matplotlib.widgets import Cursor
from matplotlib.gridspec import GridSpec
from  matplotlib import  ticker
import glob

def get_latest_control_log():
    # get latest path
    folder_path = "/ssd/open_source/easy_apollo/data/log/*"
    list_of_mixed_path = glob.glob(folder_path)
    list_of_folder_path = [path for path in list_of_mixed_path if os.path.isdir(path)]
    latest_path = max(list_of_folder_path, key=os.path.getctime)

    # get latet control.log
    latest_path += "/*"
    list_of_files = glob.glob(latest_path)
    list_of_control = [file for file in list_of_files if 'control.log' in file]
    latest_control_file = max(list_of_control, key=os.path.getctime)
    # print(latest_control_file)

    # get start time
    pattern = r"\d{8}-\d{6}"
    time = re.findall(pattern, latest_control_file)[0]
    hour = time[9:11]
    minute = time[11:13]
    start_time = hour + ':'+ minute
    # print(time)
    return latest_control_file, start_time

def get_string_between(string, st, ed=''):
    """get string between keywords"""
    if string.find(st) < 0:
        return ''
    sub_string = string[string.find(st) + len(st):]
    if len(ed) == 0 or sub_string.find(ed) < 0:
        return sub_string.strip()
    return sub_string[:sub_string.find(ed)]


def get_planning_seq_num(line):
    """get planning seq num from line"""
    return get_string_between(line, 'start frame sequence id = [', ']')


def get_time(line):
    """get time from line"""
    return get_string_between(line, ' ', ' ')


def get_timestamp_from_line(line):

    profile_list = line.split(' ')
    # print(profile_list[1])

    time_item =profile_list[1].split(':')
    # print(time_item)
    time = time_item[0] + time_item[1] + time_item[2]
    # print(time)

    return float( time)

def get_lines_between(lines, st, ed=''):
    """get valid log with keywords"""
    valid_lines = []
    found_start = False
    for line in lines:
        if st in line:
            found_start = True
        if len(ed) != 0 and ed in line:
            break
        if found_start:
            valid_lines.append(line)
    return valid_lines

def get_single_data_from_line(line, data):
    data.clear()
    x = []

    # .*？ 表示匹配任意个字符到下一个符合条件的字符
    # (.*?) 表示匹配任意个字符到下一个符合条件的字符，且只保留（）中的内容

    # []，匹配集合中的所有字符

    # https://zhuanlan.zhihu.com/p/139596371

    pat = re.compile(r'[(](.*?)[)]', re.S)

    str_list = re.findall(pat, line)
    for string in str_list:
        num = string.split(",")
        x.append(float(num[0]))
    if x:
        data.append(x)
        

def plot_lon_acc(lines, ax):
    elem_map = {'control_acc': [],
                'planner_acc': []
                }
    acc_control =[]
    acc_planner = []
    acc_control_time =[]

    for line in lines:
        for key in elem_map.keys():
            name = "print_" + key + ":"
            if name in line:
                get_single_data_from_line(line, elem_map[key])
                time =  get_timestamp_from_line(line)
                # print(elem_map[key][0][0])
                if key == "control_acc":
                    acc_control.append( elem_map[key][0][0])
                    acc_control_time.append(time)
                elif key == "planner_acc":
                    acc_planner.append( elem_map[key][0][0])

    # print(acc)

    # x = [x+1 for x in range(len(acc))]
    # # 纵坐标
    # y = acc
    # 生成折线图：函数polt
    # plt.plot(x, y)    




    for key in elem_map.keys():
        if elem_map[key]:
            x = acc_control_time
            if key == "control_acc":
                y = acc_control
            elif key == "planner_acc":
                y = acc_planner
            ax["acc"].plot(x,y, '-', label= key)
    
    # ax["acc"].set_ylim(-10, 10)
    ax["acc"].set_xlabel("time")
    ax["acc"].set_ylabel("adc lon acc")
    ax["acc"].ticklabel_format(useOffset=False, style='plain')

def plot_speed(lines, ax):
    elem_map = {'adc_speed': []}
    speed =[]
    speed_time =[]

    for line in lines:
        for key in elem_map.keys():
            name = "print_" + key + ":"
            if name in line:
                get_single_data_from_line(line, elem_map[key])
                # print(elem_map[key][0][0])
                speed.append( elem_map[key][0][0])

                time =  get_timestamp_from_line(line)
                speed_time.append(time)
    

    # x = [x+1 for x in range(len(speed))]
    # 纵坐标
    y = speed
    # 生成折线图：函数polt
    # plt.plot(x, y)    




    for key in elem_map.keys():
        if elem_map[key]:
            x = speed_time
            ax["speed"].plot(x,y, '-', label= key)
    
    # ax["speed"].set_ylim(-1, 30)
    ax["speed"].set_xlabel("time")
    ax["speed"].set_ylabel("adc_speed")
    ax["speed"].ticklabel_format(useOffset=False, style='plain')

def plot_veh_lat_offset_to_path(lines, ax):
    elem_map = {'adc_offset': []}
    adc_offset_value =[]
    adc_offset_time =[]

    for line in lines:
        for key in elem_map.keys():
            name = "print_" + key + ":"
            if name in line:
                get_single_data_from_line(line, elem_map[key])
                # print(elem_map[key][0][0])
                adc_offset_value.append( elem_map[key][0][0])


                time =  get_timestamp_from_line(line)
                adc_offset_time.append(time)
    

    x = [x+1 for x in range(len(adc_offset_value))]
    # 纵坐标
    y = adc_offset_value
    # 生成折线图：函数polt
    # plt.plot(x, y)    




    for key in elem_map.keys():
        if elem_map[key]:
            x = adc_offset_time
            ax["lat_offset"].plot(x,y, '-', label= "adc_offset_to_path")
    
    # ax["lat_offset"].set_ylim(-1, 1)
    ax["lat_offset"].set_xlabel("time")
    ax["lat_offset"].set_ylabel("adc_lateral_offset_to_path")
    ax["lat_offset"].ticklabel_format(useOffset=False, style='plain')

def plot_adc_lat_acc(lines, ax):
    elem_map = {'adc_lateral_acc': []}

    adc_acc_list =[]
    adc_acc_time =[]

    for line in lines:
        for key in elem_map.keys():
            name = "print_" + key + ":"
            if name in line:
                get_single_data_from_line(line, elem_map[key])
                # print(elem_map[key][0][0])
                adc_acc_list.append( elem_map[key][0][0])
                time =  get_timestamp_from_line(line)
                adc_acc_time.append(time)
    

    x = [x+1 for x in range(len(adc_acc_list))]
    # 纵坐标
    y = adc_acc_list
    # 生成折线图：函数polt
    # plt.plot(x, y)    




    for key in elem_map.keys():
        if elem_map[key]:
            x = adc_acc_time
            ax["adc_lateral_acc"].plot(x,y, '-', label= key)
    
    # ax["adc_lateral_acc"].set_ylim(-4, 4)
    ax["adc_lateral_acc"].set_xlabel("time")
    ax["adc_lateral_acc"].set_ylabel("adc_lateral_acc")
    ax["adc_lateral_acc"].ticklabel_format(useOffset=False, style='plain')

def plot_steering_wheel(lines, ax):
    elem_map = {'control_wheel': [],
                #  'cmd_acc': []}
                 'chassis_wheel': [],

                #  'pure_pursuit_chassis':[],
                #  'pure_pwj':[],
                #  'pure_step1':[],
                #  'pure_step2':[],
                #  'pure_cpp':[],
                 }
    control_wheel =[]
    chassis_wheel =[]
    chassis_wheel_time =[]

    pure_pwj_wheel =[]
    pure_step1_wheel =[]
    pure_step2_wheel =[]
    pure_cpp_wheel =[]
    # debug_chassis_wheel =[]

    for line in lines:
        for key in elem_map.keys():
            name = "print_" + key + ":"
            if name in line:
                get_single_data_from_line(line, elem_map[key])
                # print(elem_map[key][0][0])

                if(key=='control_wheel'):
                    control_wheel.append( elem_map[key][0][0])
                if(key=='chassis_wheel'):
                    chassis_wheel.append( elem_map[key][0][0])
                    time =  get_timestamp_from_line(line)
                    chassis_wheel_time.append(time)

                # if(key=='pure_pursuit_chassis'):
                    # debug_chassis_wheel.append(elem_map[key][0][0])
                if(key=='pure_pwj'):
                    pure_pwj_wheel.append(elem_map[key][0][0])
                if(key=='pure_step1'):
                    pure_step1_wheel.append(elem_map[key][0][0])
                if(key=='pure_step2'):
                    pure_step2_wheel.append(elem_map[key][0][0])
                if(key=='pure_cpp'):
                    pure_cpp_wheel.append(elem_map[key][0][0])
    
    # print(control_wheel)

    min_len = len(control_wheel)

    # x = [x+1 for x in range(len(control_wheel))]
    # 纵坐标

    # 生成折线图：函数polt
    # plt.plot(x, y)    




    for key in elem_map.keys():
        if elem_map[key]:
            if(key =='control_wheel'):
                y = control_wheel
                x = chassis_wheel_time
                # x = [x+1 for x in range(len(control_wheel))]
                ax["wheel"].plot(x,y, label= "smoothed control", c='limegreen',linestyle='-')
            if(key =='chassis_wheel'):
                y = chassis_wheel
                x = chassis_wheel_time
                # x = [x+1 for x in range(len(chassis_wheel))]
                ax["wheel"].plot(x,y, label= key,c='magenta',linestyle='-',linewidth=1)
            # if(key =='pure_pursuit_chassis'):
            #     y = debug_chassis_wheel
            #     ax["wheel"].plot(x2,y, label= key,c='cyan',linestyle='--')
            if(key =='pure_pwj'):
                y = pure_pwj_wheel
                x = chassis_wheel_time
                # x = [x+1 for x in range(len(pure_pwj_wheel))]
                ax["wheel"].plot(x,y, label= key,c='orange',linestyle='--')
            if(key =='pure_step1'):
                y = pure_step1_wheel
                x = chassis_wheel_time
                # x = [x+1 for x in range(len(pure_step1_wheel))]
                ax["wheel"].plot(x,y,  label= key,c='blue',linestyle='--')
            if(key =='pure_step2'):
                y = pure_step2_wheel
                x = chassis_wheel_time
                # x = [x+1 for x in range(len(pure_step2_wheel))]
                ax["wheel"].plot(x,y, label= key,c='gray',linestyle='-')
            if(key =='pure_cpp'):
                y = pure_cpp_wheel
                x = chassis_wheel_time
                # x = [x+1 for x in range(len(pure_cpp_wheel))]
                ax["wheel"].plot(x,y, label= key,c='red',linestyle='--')
            

    
    # ax["wheel"].set_ylim(-600, 600)
    ax["wheel"].set_xlabel("time")
    ax["wheel"].set_ylabel("degree")
    ax["wheel"].ticklabel_format(useOffset=False, style='plain')



def plot_frame(fig, ax, lines, line_st_num, line_ed_num):
    """plot ref frame"""
    print( 'plot line start num: ' + str(line_st_num + 1))
    print( 'plot line end num: ' + str(line_ed_num + 1))
    frame_seq = get_planning_seq_num(lines[line_st_num])
    print( 'frame seq num: ' + frame_seq)


    valid_lines = []
    for i in range(line_st_num, line_ed_num):
        valid_lines.append(lines[i])

    # plot curve from point vectors
    ax_title = 'seq: ' + frame_seq
    fig.suptitle(ax_title)
    for value in ax.values():
        value.lines = []
        value.texts = []
    plot_lon_acc(valid_lines, ax)

    for value in ax.values():
        value.legend()
        value.grid(True)

    #ax.set_aspect(1)
    
    plt.subplots_adjust(left=0.1, right=0.9, top=0.9, bottom=0.1)

    plt.draw()

    return




def search_next(lines, line_search_num):
    """search forward, return frame start and end line number"""
    start_line_num = -1
    seq_id = '-1'
    for i in range(line_search_num, len(lines)):
        if 'Planning start frame sequence id' in lines[i]:
            seq_id = get_string_between(lines[i], 'sequence id = [', ']')
            start_line_num = i
            break
    if start_line_num < 0:
        return -1, -1, seq_id

    for i in range(start_line_num, len(lines)):
        if 'Planning end frame sequence id = [' + seq_id in lines[i]:
            return start_line_num, i, seq_id
    return start_line_num, -1, seq_id


def search_last(lines, line_search_num):
    end_line_num = -1
    seq_id = '-1'
    for i in range(line_search_num, 0, -1):
        if 'Planning end frame sequence id' in lines[i]:
            seq_id = get_string_between(lines[i], 'sequence id = [', ']')
            end_line_num = i
            break
    if end_line_num < 0:
        return -1, -1, seq_id

    for i in range(end_line_num, 0, -1):
        if 'Planning start frame sequence id = [' + seq_id in lines[i]:
            return i, end_line_num, seq_id
    return -1, end_line_num, seq_id

def search_time_line(lines, search_time):
    """search line with time"""
    for i in range(len(lines)):
        if search_time in lines[i]:
            return i + 1
    return 0


def search_seq_line(lines, search_seq):
    """search line with time"""
    for i in range(len(lines)):
        if 'start frame sequence id' in lines[i]:
            if 'start frame sequence id = [' + search_seq in lines[i]:
                return i + 1
    return 0


class MouseEventManager(object):
    x, y = 0.0, 0.0
    xoffset, yoffset = -20, 20
    text_template = 'x: %0.2f\ny: %0.2f'
    annotation = False

    def on_click(self, event):
        # if mouse button is not right, return
        # 1: left, 2: middle, 3: right
        if event.button != 3:
            return
        self.x, self.y = event.xdata, event.ydata
        if self.x is not None:
            print( 'mouse click x: %.2f, y: %.2f' % (event.xdata, event.ydata))
            if self.annotation:
                self.annotation.set_visible(False)
            label_text = self.text_template % (self.x, self.y)
            self.annotation = event.inaxes.annotate(label_text,
                xy=(self.x, self.y), xytext=(self.xoffset, self.yoffset),
                textcoords='offset points', ha='right', va='bottom',
                bbox=dict(boxstyle='round,pad=0.5', fc='lightcyan', alpha=0.5),
                arrowprops=dict(arrowstyle='->', connectionstyle='arc3,rad=0')
                )
            self.annotation.set_visible(True)
            self.annotation.figure.canvas.draw()


class Index(object):
    """button callback function"""
    def __init__(self,fig, ax, line_st_num, line_ed_num, lines):
        self.ax = ax
        self.fig = fig
        self.line_st_num = line_st_num
        self.line_ed_num = line_ed_num
        self.lines = lines
        self.reset_mouse_event()

    def reset_mouse_event(self):
        self.mouse_manager = MouseEventManager()
        fig.canvas.mpl_connect('button_release_event', self.mouse_manager.on_click)

    def next(self, step):
        """next button callback function"""
        for i in range(step):
            line_st_num, line_ed_num, seq_id =\
                    search_next(self.lines, self.line_ed_num + 1)
            # check whether found frame log is complete
            if line_st_num < 0 or line_ed_num < 0:
                print( '[ERROR] search reach last line, may reach last frame')
                return
            self.line_st_num = line_st_num
            self.line_ed_num = line_ed_num
        plot_frame(fig, self.ax, self.lines, self.line_st_num, self.line_ed_num)
        self.reset_mouse_event()

    def next1(self, event):
        self.next(1)

    def next10(self, event):
        self.next(10)

    def prev(self, step):
        """prev button callback function"""
        for i in range(step):
            line_st_num, line_ed_num, seq_id =\
                    search_last(self.lines, self.line_st_num - 1)
            # check whether found frame log is complete
            if line_st_num < 0 or line_ed_num < 0:
                print('[ERROR] search reach first line, may reach first frame')
                return
            self.line_st_num = line_st_num
            self.line_ed_num = line_ed_num
        plot_frame(fig, self.ax, self.lines, self.line_st_num, self.line_ed_num)
        self.reset_mouse_event()

    def prev1(self, event):
        self.prev(1)

    def prev10(self, event):
        self.prev(10)

    def exit(self, event):
        sys.exit(0)

def main():
    global g_argv
    parser = argparse.ArgumentParser()
    file_path, search_time = get_latest_control_log()
    parser.add_argument('-f', action='store', dest='log_file_path', required=False, help='log file path', default=file_path)
    parser.add_argument('-t', action='store', dest='time', required=False, help='time begin to search',default=search_time)
    parser.add_argument('-ut', action='store', dest='unix_time', required=False, help='unix time begin to search')
    parser.add_argument('-s', action='store', dest='seq', required=False, help='sequence number to search')
    g_argv = parser.parse_args()
    print('Please wait for loading data...')

    # load log file
    print("log_file_path:", g_argv.log_file_path)
    print("start_time   :", g_argv.time)
    file_path = g_argv.log_file_path
    #file_path = parse_pb_log(file_path)
    search_time = g_argv.time
    search_seq = g_argv.seq
    unix_time = g_argv.unix_time

    input = open(file_path, 'r')

    lines = input.readlines()

    line_search_num =0
    if search_time:
        line_search_num = search_time_line(lines, search_time)
    elif search_seq:
        line_search_num = search_seq_line(lines, search_seq)
    elif  unix_time:
        search_time = datetime.utcfromtimestamp(float(unix_time)).strftime('%H:%M:%S')
        print("from unixtime %s to data time %s"%(unix_time, search_time))
    else:
        print( 'search time or sequence number or unix time is required, quit!')

    # print( line_search_num)
    # # check whether time is exist
    # if line_search_num == 0:
    #     print( 'no such time, quit!')
    #     sys.exit(0)

    # line_st_num, line_ed_num, seq_id = search_next(lines, line_search_num)
    # # check whether found frame log is complete
    # if line_st_num < 0 or line_ed_num < 0:
    #     print( '[ERROR] search reach last line, may reach last frame, quit!')
    #     sys.exit(0)

    fig = plt.figure(figsize = [9, 15])
    gs = GridSpec(2, 1, figure=fig)
    ax = {}
    ax['acc'] = fig.add_subplot(gs[0,0])
    ax['wheel'] = fig.add_subplot(gs[1,0])

    plot_lon_acc( lines, ax)
    plot_steering_wheel( lines, ax)
    for value in ax.values():
        value.legend()
        value.grid(True)

    fig2 = plt.figure(figsize = [9, 15])
    gs2 = GridSpec(3, 1, figure=fig2)
    ax2 = {}
    ax2['speed'] = fig2.add_subplot(gs2[0,0])
    ax2['lat_offset'] = fig2.add_subplot(gs2[1,0])
    ax2['adc_lateral_acc'] = fig2.add_subplot(gs2[2,0])

    # plot_frame(fig, ax, lines, line_st_num, line_ed_num)



    # fig2, adc speed, adc offset
    plot_speed( lines, ax2)
    plot_veh_lat_offset_to_path( lines, ax2)
    plot_adc_lat_acc( lines, ax2)
    for value in ax2.values():
        value.legend()
        value.grid(True)



    #ax.set_aspect(1)
    
    plt.subplots_adjust(left=0.1, right=0.9, top=0.9, bottom=0.1)


    # 显示网格
    plt.grid(True)
    # 显示图表
    plt.show()


if __name__ == '__main__':
    main()
