cmake_minimum_required(VERSION 3.14)
project(CarFactory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CarFactory
        Cola.cpp
        Cola.h
        LineaProduccion.cpp
        LineaProduccion.h
        Lista.cpp
        Lista.h
        main.cpp
        Proceso.cpp
        Proceso.h
        Vehiculo.cpp
        Vehiculo.h Programa.cpp Programa.h Pruebas.cpp Pruebas.h EspacioProduccion.cpp EspacioProduccion.h)
