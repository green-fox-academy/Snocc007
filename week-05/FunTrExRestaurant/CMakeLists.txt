cmake_minimum_required(VERSION 3.13)
project(FunTrExRestaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(FunTrExRestaurant employees.cpp employees.h restaurant.cpp restaurant.h main.cpp waiters.cpp waiters.h chef.cpp chef.h manager.cpp manager.h)