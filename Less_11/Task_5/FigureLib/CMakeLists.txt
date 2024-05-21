cmake_minimum_required(VERSION 3.19)
project(FigureLib)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(SOURCES Figure.cpp Quadrangle.cpp Triangle.cpp)
set(HEADERS Figure.h Quadrangle.h Triangle.h)
add_library(FigureLib SHARED ${SOURCES} ${HEADERS})
