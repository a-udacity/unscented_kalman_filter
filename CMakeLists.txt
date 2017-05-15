project(UnscentedKalmanFilter)

cmake_minimum_required(VERSION 3.5)

add_definitions(-std=c++0x)

set(sources src/main.cpp src/common_header.h src/ukf.h src/ukf.cpp)

add_executable(UnscentedKalmanFilter ${sources})