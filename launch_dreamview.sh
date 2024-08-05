#!/bin/bash
#

source ./set_env.bash
source ./setup.bash


DREAMVIEW_URL="http://localhost:8888"

start_procs="dreamview_main"


SCRIPTS_PATH=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)


export COMMON_PATH=${SCRIPTS_PATH}/../modules/common

export THIRD_LIB_DIR=${SCRIPTS_PATH}/../third_party/install
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${THIRD_LIB_DIR}/tf2/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${THIRD_LIB_DIR}/libtorch_cpu/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${THIRD_LIB_DIR}/opencv/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${SCRIPTS_PATH}/lib


for proc in $start_procs; do
    if [ "$proc"x = "dreamview_main"x ]; then
            ./$proc --flagfile=${COMMON_PATH}/data/global_flagfile.txt &      
        echo $proc
    else 
        ./$proc &
    fi
done
