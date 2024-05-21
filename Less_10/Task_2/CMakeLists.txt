cmake_minimum_required(VERSION 3.19)
project(my_second_cmake_program)

set(HEADER ./header/Figure.h ./header/Quadrangle.h ./header/Triangle.h)
set(SOURCE ./source/Figure.cpp ./source/Quadrangle.cpp ./source/Triangle.cpp ./source/main.cpp )

add_executable(my_second_cmake_program ${SOURCE} ${HEADER})
set_target_properties(my_second_cmake_program PROPERTIES LINKER_LANGUAGE CXX)