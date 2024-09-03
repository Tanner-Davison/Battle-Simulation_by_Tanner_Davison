cmake_minimum_required(VERSION 3.29)
project(Cplusplus_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(HelloWorldDemo)

add_executable(Cplusplus_Project
    HelloWorldDemo/CharacterFuncs.cpp
    HelloWorldDemo/main.cpp
    HelloWorldDemo/MathFuncs.cpp
    )
