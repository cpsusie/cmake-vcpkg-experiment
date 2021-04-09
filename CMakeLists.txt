cmake_minimum_required(VERSION 3.17)
project("Foobar")

set(CMAKE_CXX_STANDARD 20)
if(NOT DEFINED CMAKE_INSTALL_INCLUDEDIR)
    SET(CMAKE_INSTALL_INCLUDEDIR include CACHE
            PATH "Output directory for header files")
endif()

include_directories("include")

add_library(Foobar INTERFACE)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/foobar/ FILES_MATCHING PATTERN "*.hpp")


add_executable(Test program.cpp)
