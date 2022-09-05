cmake_minimum_required(VERSION 2.8)
project(ch3_exercise)

find_package(Eigen3 REQUIRED)

include_directories(${EIGEN3_INCLUDE_DIRS})
add_executable(Ex5 Ex5.cpp)
