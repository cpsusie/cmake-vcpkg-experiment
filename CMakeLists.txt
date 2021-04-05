cmake_minimum_required(VERSION 3.6)
project("Foobar")

set(CMAKE_CXX_STANDARD 20)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
add_library(Foobar INTERFACE)
target_include_directories(Foobar SYSTEM INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>)


add_executable(Test program.cpp)
