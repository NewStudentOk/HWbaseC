cmake_minimum_required(VERSION 3.19)
project(LeaverLib)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(HEADERS Leaver.h)
set(SOURCES Leaver.cpp)


add_library(LeaverLib SHARED ${SOURCES} ${HEADERS})

set_target_properties(11_03 PROPERTIES LINKER_LANGUAGE CXX)