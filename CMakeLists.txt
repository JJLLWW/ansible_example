cmake_minimum_required(VERSION 3.10.0)
project(hello_world)

find_package(OpenMP)

add_executable(output main.cpp)
