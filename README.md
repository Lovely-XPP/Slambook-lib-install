# Slambook-Lib-Install
## Introduction

Introduction to install 3rdparty library of Slambook2 by Xiang Gao.

## Platform: Ubuntu

## Update time: 2022.09.01

## Steps

### 1. git & Dependency 

```bash
sudo apt install git
```

### 2. Slambook2

```bash
git clone https://github.com/gaoxiang12/slambook2/
```

### 3. Vim

```bash
sudo apt install vim
```

### 4. Compiler

```bash
sudo apt install gcc g++ cmake
```

### 5. Eigen

```bash
sudo apt install libeigen3-dev
```

### 6. Pangolin

- Dependents

```bash
sudo apt install libglew-dev libboost-dev libboost-thread-dev libboost-fileystem-dev
```

- git

```bash
cd 3rdparty # if current dir is 3rdparty, skip this command
git clone https://github.com/stevenlovegrove/Pangolin.git
```

- Cmake

```bash
cd Pangolin
mkdir build && cd build
cmake ..
make -j4
sudo make install
```

### 7. fmt

- git

```bash
cd 3rdparty # if current dir is 3rdparty, skip this command
git clone https://github.com/fmtlib/fmt.git
cd fmt
git checkout b6f4ceae
```

- Cmake

```bash
cd fmt # if current dir is fmt, skip this command
mkdir build && cd build
cmake ..
make -j4
sudo make install
```

### 8. Sophus

- git

```bash
cd 3rdparty # if current dir is 3rdparty, skip this command
git clone https://github.com/strasdat/Sophus
```

- Cmake

```bash
cd Sophus
mkdir build && cd build
cmake ..
make -j4
sudo make install
```

### 9. g2o

- Dependents

```bash
cd 3rdparty # if current dir is 3rdparty, skip this command
sudo apt install libqt4-dev qt5-qmake libqglviewer-dev-qt5 libsuitesparse-dev libcxsparse3 libcholmod3
```

- git

```bash
git clone https://github.com/RainerKuemmerle/g2o
cd g2o
git checkout 9b41a4ea
```

- Cmake

```bash
cd g2o # if current dir is g2o, skip this command
mkdir build && cd build
cmake ..
make -j4
sudo make install
```

### 10. DBow3

- git

```bash
cd 3rdparty # if current dir is 3rdparty, skip this command
git clone https://github.com/rmsalinas/DBow3
cd DBow3
git checkout c5ae539a
```

- Cmake

```bash
cd DBow3 # if current dir is DBow3, skip this command
mkdir build && cd build
cmake ..
make -j4
sudo make install
```

### 11. OpenCV 3

- Dependents

```bash
sudo apt install unzip build-essential libgtk2.0-dev libvtk6-dev libjpeg-dev libtiff5-dev libjasper-dev libopenexr-dev libtbb-dev
```

- Download Source Code

```bash
cd 3rdparty # if current dir is 3rdparty, skip this command
wget https://github.com/opencv/opencv/archive/3.4.16.zip -O opencv3.zip
unzip -q opencv3.zip
```

- Cmake

```bash
cd opencv-3.4.16
mkdir build && cd build
cmake ..
make -j4
sudo make install
```

## For Arm64 Machine

In `ch7`, `nmmintrin.h` is not avalible for arm64 machine because it is the Instruction Set of Intel silicon (SSE). We need to replace it with `sse2neon.h` which can transfer the Instruction Set to NEON (Arm Instruction Set).

### Install

```bash
git clone https://github.com/DLTcollab/sse2neon.git
cd sse2neon
sudo cp sse2neon.h /usr/include/
```

### Replace in `orb_self.cpp`

```c++
#include <nmmintrin.h> -> #include <sse2neon.h>
```

