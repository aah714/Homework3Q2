cmake_minimum_required(VERSION 3.20)
project(HW3_q2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW3_q2
        main.cpp
        Polygon.cpp
        Polygon.h
        Triangle.cpp
        Triangle.h
        Rectangle.cpp
        Rectangle.h)
