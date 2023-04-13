cmake_minimum_required(VERSION 3.5)

project(CppTask_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppTask_3 main.cpp
    queue.h
)

install(TARGETS CppTask_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
