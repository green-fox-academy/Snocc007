cmake_minimum_required(VERSION 3.13)
project(patrolStation)

set(CMAKE_CXX_STANDARD 14)

add_executable(patrolStation main.cpp Station.cpp Station.h Car.cpp Car.h)