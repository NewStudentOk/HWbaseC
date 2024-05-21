cmake_minimum_required(VERSION 3.19)
project(11_01_v2)

set(CMAKE_CXX_STANDARD 14)

add_library(GreeterLib STATIC ./GreeterLibStatic/greeter.h ./GreeterLibStatic/greeter.cpp)

add_executable(11_01_v2 GreeterLibClient/main.cpp)

target_link_libraries(11_01_v2 GreeterLib)