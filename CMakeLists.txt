cmake_minimum_required(VERSION 4.2)
project(library_management_system_in_oop_in_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(library_management_system_in_oop_in_cpp main.cpp
        components/Items.cpp
        components/Student.cpp
        utlis/RandomNumberGenerator.cpp)
