cmake_minimum_required(VERSION 3.19)
project(11_02)
include_directories(LeaverLibDinamic)

set(CMAKE_CXX_STANDARD 14)

add_executable(11_02 LeaverLibClient/main.cpp)
add_subdirectory(LeaverLibDinamic)
target_link_libraries(11_02 LeaverLib)