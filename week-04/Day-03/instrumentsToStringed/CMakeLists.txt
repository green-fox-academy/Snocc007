cmake_minimum_required(VERSION 3.13)
project(instrumentsToStringed)

set(CMAKE_CXX_STANDARD 14)

add_executable(instrumentsToStringed main.cpp instrument.cpp instrument.h stringedInstrument.cpp stringedInstrument.h electricGuitar.cpp electricGuitar.h bassGuitar.cpp bassGuitar.h violin.cpp violin.h)