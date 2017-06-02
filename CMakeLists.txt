cmake_minimum_required(VERSION 3.7)
project(labuml)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Point.cpp Shape.cpp Circle.cpp Rect.cpp ComplexShape.cpp main.cpp)
add_executable(labuml ${SOURCE_FILES})