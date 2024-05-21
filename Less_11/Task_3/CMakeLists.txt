cmake_minimum_required(VERSION 3.19)
project(11_03)
include_directories(LeaverLibDinamic)


add_executable(11_03 LeaverLibClient/main.cpp)
add_subdirectory(LeaverLibDinamic)
target_link_libraries(11_03 LeaverLib)
set_target_properties(11_03 PROPERTIES LINKER_LANGUAGE CXX)