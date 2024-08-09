#!/usr/bin/env python3
#coding:utf-8

import time, glob
import numpy as np
import pandas as pd
import tkinter as tk
from tkinter import *
from scipy import signal
import subprocess as sp
from datetime import datetime
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
from matplotlib.figure import Figure
import argparse, matplotlib, linecache, re, os
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.backends.backend_tkagg import NavigationToolbar2Tk

string2time_s = lambda date_str: datetime.strptime(date_str, "%Y%m%d %H:%M:%S.%f")

vars_map = {"planner_acc": "planner_acc",
            "control_acc": "control_acc",
            "vehicle_acc": "vehicle_acc",
            "expt_throttle": "expt_throttle",
            "expt_brake": "expt_brake",
            "planner_vel": "planner_vel",
            "vehicle_vel": "vehicle_vel",
            "planner_shift": "planner_shift",
            "control_shift": "control_shift",
            "vehicle_shift": "vehicle_shift",
            "control_steer": "control_steer",
            "vehicle_steer": "vehicle_steer",
            "lateral_error": "lateral_error",
            "heading_error": "heading_error",
            "auto_status": "auto_status"}

def get_latest_control_log(log_path):
    # get latest path
    folder_path = log_path + "/*"
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

def parse_info_line(line):
    time_string = re.findall(r'\d{8} \d{2}:\d{2}:\d{2}\.\d{6}', line)[0]
    line = line.split("] ")[1]
    # vehicle_steer:0.0180371, lateral_error:8.77969e-05, heading_error:-1.37193e-06, auto_status:1
    # pattern = "([\w]{1,30}):(-{0,1}\d+(?:\.\d+)?)"
    pattern = "([\w]{1,30}):(-{0,1}\d+(?:\.\d+)?e{0,1}-{0,1}\d{0,2})"
    name_value = re.findall(pattern, line)
    name_value = {key: float(value) for key, value in name_value}
    name_value['time'] = string2time_s(time_string)

    if name_value['lateral_error'] > 4.0:
        print(time_string, line)
    return name_value

def parse_data_file(file):
    input = open(file, 'r')
    lines = input.readlines()
    pnc_data = {'time': [],
                 'planner_acc': [],
                 'control_acc': [],
                 'vehicle_acc': [],
                 'planner_vel': [],
                 'vehicle_vel': [],
                 'expt_throttle': [],
                 'expt_brake': [],
                 'planner_shift': [],
                 'control_shift': [],
                 'vehicle_shift': [],
                 'control_steer': [],
                 'vehicle_steer': [],
                 'lateral_error': [],
                 'heading_error': [],
                 'auto_status': []}
    for line in lines:
        if 'expt_throttle' in line:
            data_curr_line = parse_info_line(line)
            for key in pnc_data.keys():
                pnc_data[key].append(data_curr_line[key])
    return pnc_data

class PrecisionDateFormatter(ticker.Formatter):
    """
    Extend the `matplotlib.ticker.Formatter` class to allow for millisecond
    precision when formatting a tick (in days since the epoch) with a
    `~datetime.datetime.strftime` format string.

    """

    def __init__(self, fmt, precision=3, tz=None):
        """
        Parameters
        ----------
        fmt : str
            `~datetime.datetime.strftime` format string.
        """
        from matplotlib.dates import num2date
        if tz is None:
            from matplotlib.dates import _get_rc_timezone
            tz = _get_rc_timezone()
        self.num2date = num2date
        self.fmt = fmt
        self.tz = tz
        self.precision = precision

    def __call__(self, x, pos=0):
        if x == 0:
            raise ValueError("DateFormatter found a value of x=0, which is "
                             "an illegal date; this usually occurs because "
                             "you have not informed the axis that it is "
                             "plotting dates, e.g., with ax.xaxis_date()")

        dt = self.num2date(x, self.tz)
        ms = dt.strftime("%f")[:self.precision]

        return dt.strftime(self.fmt).format(ms=ms)

    def set_tzinfo(self, tz):
        self.tz = tz

class Stg(tk.Tk):
    def __init__(self, log_path):
        tk.Tk.__init__(self)
        self.planner_data = None
        self.parser_options()

        # log_file = vars(self.planner_opts[0])['log_file']
        log_file, start_time = get_latest_control_log(log_path)
        self.pnc_data = parse_data_file(log_file)

        self.title(log_file)
        self.createWdidgets()

    def createWdidgets(self):
        ''' 界面 '''
        footframe = tk.Frame(self)
        footframe['borderwidth'] = 12
        footframe['relief'] = 'raised'
        footframe.grid(column=0, row=0, sticky=(N, W, E, S))

        self.columnconfigure(0, weight=1)
        self.rowconfigure(0, weight=1)
        footframe.columnconfigure(0, weight=5)
        footframe.rowconfigure(0, weight=5)

        fig = Figure(figsize=(8, 4), dpi=100)
        self.ax = fig.add_subplot(111)
        self.twinx = self.ax.twinx()
        self.twiny = self.ax.twiny()
        self.canvas = FigureCanvasTkAgg(fig, footframe)
        self.canvas.get_tk_widget().pack(fill="both", expand=1)

        toolbar = NavigationToolbar2Tk(self.canvas, footframe)
        toolbar.update()

        footframe2 = tk.Frame(self)
        footframe2.grid(row=0,column=1, sticky=(N, W, E, S))
        footframe2.columnconfigure(1, weight=1)

        labelAcc = tk.LabelFrame(footframe2, text='Acc')
        labelVel = tk.LabelFrame(footframe2, text='Vel')
        labelShift = tk.LabelFrame(footframe2, text='Shift')
        labelSteer = tk.LabelFrame(footframe2, text='Steer')
        labelState = tk.LabelFrame(footframe2, text='State')
        labelDatatip = tk.LabelFrame(footframe2, text='Datatip')

        labelAcc.grid(column=0, row=0, padx=8, pady=4, sticky='EW')
        labelVel.grid(column=0, row=1, padx=8, pady=4, sticky='EW')
        labelShift.grid(column=0, row=2, padx=8, pady=4, sticky='EW')
        labelSteer.grid(column=0, row=3, padx=8, pady=4, sticky='EW')
        labelState.grid(column=0, row=4, padx=8, pady=4, sticky='EW')
        labelDatatip.grid(column=0, row=5, padx=8, pady=4, sticky='EW')

        self.size = len(self.pnc_data['time'])
        self.frame = np.array(range(1, self.size + 1))

        # 1. set check_value
        self.checkVar_expt_acc_planner = IntVar()  # acc
        self.checkVar_expt_acc = IntVar()
        self.checkVar_veh_acc = IntVar()
        self.checkVar_expt_throttle = IntVar()
        self.checkVar_expt_brake = IntVar()  # brake

        self.checkVar_expt_vel_planner = IntVar()
        self.checkVar_veh_vel = IntVar()

        self.checkVar_expt_shift_planner = IntVar()  # shift
        self.checkVar_expt_shift = IntVar()
        self.checkVar_veh_shift = IntVar()

        self.checkVar_expt_steer_ang = IntVar()  # steer_ang
        self.checkVar_veh_steer_ang = IntVar()
        self.checkVar_lateral_err = IntVar()
        self.checkVar_heading_err = IntVar()

        self.checkVar_ad_status = IntVar()  # Status
        self.checkVar_clear_all = IntVar()
        self.checkVar_datatip_axis = IntVar()  # Datatip

        # 2. place checkbutton
        checkbutton_expt_acc_planner = tk.Checkbutton(labelAcc,  # acc
                text='Expt_Acc_Planner',
                variable = self.checkVar_expt_acc_planner,
                onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_acc_planner.grid(row=0, column=0, sticky=(W))

        checkbutton_expt_acc = tk.Checkbutton(labelAcc, text='Expt_Acc',
                variable = self.checkVar_expt_acc, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_acc.grid(row=1, column=0, sticky=(W))

        checkbutton_veh_acc = tk.Checkbutton(labelAcc, text='Veh_Acc',
                variable = self.checkVar_veh_acc, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_veh_acc.grid(row=2, column=0, sticky=(W))

        checkbutton_expt_throttle = tk.Checkbutton(labelAcc, text='Expt_Throttle',
                variable = self.checkVar_expt_throttle, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_throttle.grid(row=3, column=0, sticky=(W))

        checkbutton_expt_brake = tk.Checkbutton(labelAcc, text='Expt_Brake',  # brake
                variable = self.checkVar_expt_brake, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_brake.grid(row=4, column=0, sticky=(W))


        checkbutton_expt_vel_planner = tk.Checkbutton(labelVel, text='Expt_Vel_Planner',  # vel
                variable = self.checkVar_expt_vel_planner, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_vel_planner.grid(row=0, column=0, sticky=(W))

        checkbutton_veh_vel = tk.Checkbutton(labelVel, text='Veh_Vel',
                variable = self.checkVar_veh_vel, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_veh_vel.grid(row=1, column=0, sticky=(W))

        checkbutton_expt_shift_planner = tk.Checkbutton(labelShift, text='Expt_Shift_Planner',  # shift
                variable = self.checkVar_expt_shift_planner, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_shift_planner.grid(row=0, column=0, sticky=(W))

        checkbutton_expt_shift = tk.Checkbutton(labelShift, text='Expt_Shift',
                variable = self.checkVar_expt_shift, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_shift.grid(row=1, column=0, sticky=(W))

        checkbutton_veh_shift = tk.Checkbutton(labelShift, text='Veh_Shift',
                variable = self.checkVar_veh_shift, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_veh_shift.grid(row=2, column=0, sticky=(W))

        checkbutton_expt_steer_ang = tk.Checkbutton(labelSteer, text='Expt_Steer_Ang',  #steer_ang
                variable = self.checkVar_expt_steer_ang, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_steer_ang.grid(row=0, column=0, sticky=(W))

        checkbutton_veh_steer_ang = tk.Checkbutton(labelSteer, text='Veh_Steer_Ang',
                variable = self.checkVar_veh_steer_ang, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_veh_steer_ang.grid(row=1, column=0, sticky=(W))

        checkbutton_expt_steer_ang_vel = tk.Checkbutton(labelSteer, text='Lateral_Err',
                variable = self.checkVar_lateral_err, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_expt_steer_ang_vel.grid(row=2, column=0, sticky=(W))

        checkbutton_veh_steer_ang_vel = tk.Checkbutton(labelSteer, text='Heading_Err',
                variable = self.checkVar_heading_err, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_veh_steer_ang_vel.grid(row=3, column=0, sticky=(W))


        checkbutton_veh_control_source = tk.Checkbutton(labelState, text='Veh_Ad_Status',
                variable = self.checkVar_ad_status, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_veh_control_source.grid(row=0, column=0, sticky=(W))

        checkbutton_clear_all = tk.Checkbutton(labelState, text='Clear_all',
                variable = self.checkVar_clear_all, onvalue = 1, offvalue = 0,
                command=self.printf_info)
        checkbutton_clear_all.grid(row=4, column=0, sticky=(W))

        left_axis_radiobutton = tk.Radiobutton(labelDatatip, text="Left axis",
                variable= self.checkVar_datatip_axis, value=0,
                command=self.activate_left_axis)
        left_axis_radiobutton.grid(row=0, column=0, sticky=(W))
        right_axis_radiobutton = tk.Radiobutton(labelDatatip, text="Right axis",
                variable= self.checkVar_datatip_axis, value=1,
                command=self.activate_right_axis)
        right_axis_radiobutton.grid(row=1, column=0, sticky=(W))

        # 3. set checkVar's init value
        self.checkVar_expt_acc_planner.set(1)
        self.checkVar_expt_acc.set(1)
        self.checkVar_veh_acc.set(1)
        self.checkVar_expt_throttle.set(0)
        self.checkVar_expt_brake.set(0)

        self.checkVar_expt_vel_planner.set(1)
        self.checkVar_veh_vel.set(1)

        self.checkVar_expt_shift_planner.set(0)
        self.checkVar_expt_shift.set(0)
        self.checkVar_veh_shift.set(0)

        self.checkVar_expt_steer_ang.set(0)
        self.checkVar_veh_steer_ang.set(0)

        self.checkVar_lateral_err.set(0)
        self.checkVar_heading_err.set(0)

        self.checkVar_ad_status.set(0)
        self.checkVar_clear_all.set(0)

        self.printf_info()

        self.checkVar_datatip_axis.set(0)
        self.activate_left_axis()

    def parser_options(self):
        parser = argparse.ArgumentParser()
        parser.add_argument("-f", "--fff", help="a dummy argument to fool ipython", default="1")
        parser.add_argument('--log', action='store', dest='log_file', \
                            default=None, help='plot pnc profile gui v1.0')
        self.planner_opts = parser.parse_known_args()

    def printf_info(self):

        #clear prev plot result
        self.ax.clear()
        self.twinx.clear()
        self.twiny.clear()

        # 4. plot data
        time_string = self.pnc_data['time']
        self.twiny.plot(time_string, self.pnc_data[vars_map["vehicle_acc"]], color = 'w', alpha = 0.01)

        # 一键清除
        checkVar_name = [i for i in dir(self) if "checkVar" in i]
        checkVar_list = []
        for i in checkVar_name:
            checkVar_list.append(getattr(self, i))
        if self.checkVar_clear_all.get() == 1:
            for checkVar in checkVar_list:
                checkVar.set(0)

        if self.checkVar_expt_acc_planner.get() == 1:  # acc
            self.ax.plot(self.frame, self.pnc_data[vars_map["planner_acc"]], 'r',
                   label="expt_acc_planner/[m/ss]")

        if self.checkVar_expt_acc.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["control_acc"]], 'r--',
                   label="expt_acc")

        if self.checkVar_veh_acc.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["vehicle_acc"]],
                   'g', label="veh_acc")

        if self.checkVar_expt_throttle.get() == 1:  # expt throttle
            self.twinx.plot(self.frame, self.pnc_data[vars_map["expt_throttle"]],
                   'darkviolet', label="expt_throttle")

        if self.checkVar_expt_brake.get() == 1:  # expt brake
            self.twinx.plot(self.frame, self.pnc_data[vars_map["expt_brake"]],
                   'k', label="expt_brake")

        if self.checkVar_expt_vel_planner.get() == 1:  # vel
            self.ax.plot(self.frame, self.pnc_data[vars_map["planner_vel"]], 'y',
                   label="expt_vel_planner/[m/s]")

        if self.checkVar_veh_vel.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["vehicle_vel"]],
                   'b', label="veh_vel")

        if self.checkVar_expt_shift_planner.get() == 1:  # shift
            self.ax.plot(self.frame, self.pnc_data[vars_map["planner_shift"]],
                   'tab:pink', label="expt_shift_planner 0:N,1:D,2:R,3:P")

        if self.checkVar_expt_shift.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["control_shift"]],
                   'tab:purple', label="expt_shift 0:N,1:D,2:R,3:P")

        if self.checkVar_veh_shift.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["vehicle_shift"]],
                   'tab:blue', label="veh_shift 0:N,1:D,2:R,3:P")

        if self.checkVar_expt_steer_ang.get() == 1:  # steer
           self.ax.plot(self.frame, self.pnc_data[vars_map["control_steer"]],
                   'm', label="expt_steer_ang")

        if self.checkVar_veh_steer_ang.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["vehicle_steer"]],
                   'c', label="veh_steer_ang")

        if self.checkVar_lateral_err.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["lateral_error"]],
                   'm--', label="lateral_error")

        if self.checkVar_heading_err.get() == 1:
            self.ax.plot(self.frame, self.pnc_data[vars_map["heading_error"]],
                   'c--', label="heading_error")

        if self.checkVar_ad_status.get() == 1:  # auto drive status
            self.twinx.plot(self.frame, self.pnc_data[vars_map["auto_status"]],
                   'tab:gray', label="veh_control_source 0:Manual, 1:Auto")

        self.ax.legend(loc="upper right")
        self.twinx.legend(loc="lower right")
        self.ax.grid(True)
        self.ax.set_xlabel("frame(20ms)")
        self.ax.set_ylabel("Vel(m/s) Acc(m/ss) Shift Steer(.)")
        self.twinx.set_ylabel("Throttle Brake AD_Status")
        # self.ax.axes.xaxis.set_major_formatter(PrecisionDateFormatter("%H:%M:%S.{ms}"))
        # self.ax.axes.tick_params(axis='x', labelrotation=30)
        self.twiny.axes.xaxis.set_major_formatter(PrecisionDateFormatter("%H:%M:%S.{ms}"))
        self.canvas.draw()
    def _quit(self):
        ''' 退出 '''
        self.quit()
        self.destroy()

    def activate_left_axis(self):
        '''基于左边的坐标轴提示数据'''
        self.ax.set_zorder(0.1)
        self.ax.set_facecolor("none")
        self.twinx.set_zorder(0)
        self.ax.set_facecolor("none")

    def activate_right_axis(self):
        '''基于右边的坐标轴提示数据'''
        self.ax.set_zorder(0)
        self.ax.set_facecolor("none")
        self.twinx.set_zorder(0.1)
        self.ax.set_facecolor("none")

def main():
    log_path = "/ssd/open_source/easy_apollo/data/log"
    app = Stg(log_path)
    app.mainloop()

if __name__=='__main__':
    main()