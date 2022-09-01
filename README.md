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

### 

