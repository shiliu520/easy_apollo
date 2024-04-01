set -e

# sudo apt-get -y install libeigen3-dev


CURRENT_PATH=$(cd $(dirname $0) && pwd)

INSTALL_PREFIX="$CURRENT_PATH/../third_party/install/eigen-git-mirror"


cd $CURRENT_PATH
cd ..
cd third_party

rm -rf eigen-git-mirror
git clone --depth 1 --branch 3.3.7 git@github.com:eigenteam/eigen-git-mirror.git

cd eigen-git-mirror

mkdir build && cd build

sudo mkdir -p ./../../install/eigen-git-mirror/include/eigen3/
cmake .. -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=./../../install/eigen-git-mirror -DCMAKE_BUILD_TYPE=Release

make -j6
sudo make install

