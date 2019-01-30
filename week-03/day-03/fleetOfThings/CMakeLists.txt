cmake_minimum_required(VERSION 3.13)
project(fleetOfThings)

set(CMAKE_CXX_STANDARD 14)

add_executable(fleetOfThings main.cpp Fleet.cpp Fleet.h Things.cpp Things.h)