cmake_minimum_required(VERSION 3.13)
project(CarFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(CarFactory main.cpp Vehiculo.cpp Vehiculo.h Proceso.cpp Proceso.h Cola.cpp Cola.h Lista.cpp Lista.h)