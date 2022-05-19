cmake_minimum_required(VERSION 3.10.0)
project(hello_world)

find_package(OpenMP REQUIRED)

add_executable(output main.cpp)
target_link_libraries(output OpenMP::OpenMP_CXX)
