set -e
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[-1]}" )" && pwd )"

INSTALL_SPACE="build"

cd ${SCRIPT_DIR}  
cd ${INSTALL_SPACE}
source ../setup.bash
# source ${INSTALL_SPACE}/set_env.bash
# source ${INSTALL_SPACE}/setup.bash

cmake ..
# make -j6 -DARM=0 -DCMAKE_INSTALL_PREFIX=${INSTALL_SPACE}

# 获取操作系统版本信息
os_version=$(lsb_release -rs)

if [[ "$os_version" == "18.04" ]]; then
    # 对于 Ubuntu 18.04 执行的指令
    echo "This is Ubuntu 18.04. Executing specific commands."
    # 具体的指令
    make -j2
elif [[ "$os_version" == "20.04" ]]; then
    # 对于 Ubuntu 20.04 执行的指令
    echo "This is Ubuntu 20.04. Executing specific commands."
    # 具体的指令
    make -j16
else
    echo "Unsupported Ubuntu version: $os_version"
    exit 1
fi

sudo make install
# cd ${SCRIPT_DIR}/${INSTALL_SPACE} && ./encrypt_param.sh
# cd ${SCRIPT_DIR}/${INSTALL_SPACE}/etc && rm *.json



