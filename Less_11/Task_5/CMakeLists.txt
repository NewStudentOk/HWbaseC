cmake_minimum_required(VERSION 3.19)
project(11_05)
include_directories(FigureLib)

add_executable(11_05 FigureLibClient/main.cpp)
add_subdirectory(FigureLib)
target_link_libraries(11_05 FigureLib)
set_target_properties(11_05 PROPERTIES LINKER_LANGUAGE CXX)
