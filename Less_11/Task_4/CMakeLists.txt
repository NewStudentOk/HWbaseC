cmake_minimum_required(VERSION 3.19)
project(11_04)
include_directories(FigureLib)

set(CMAKE_CXX_STANDARD 14)

add_executable(11_04 FigureLibClient/main.cpp)
add_subdirectory(FigureLib)
target_link_libraries(11_04 FigureLib)