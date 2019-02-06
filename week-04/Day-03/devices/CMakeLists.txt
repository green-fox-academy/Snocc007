cmake_minimum_required(VERSION 3.13)
project(devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(devices main.cpp printer.cpp printer.h printer2D.cpp pprinter3D.cpp printer2D.h copier.cpp copier.h scanner.cpp scanner.h pprinter3D.cpp pprinter3D.h)