cmake_minimum_required(VERSION 3.20)  # 4.2 is not a real stable version yet

project(library_management_system_in_oop_in_cpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(library_management_system_in_oop_in_cpp
        main.cpp
        components/Items.cpp
        components/Student.cpp
        utlis/AlphaNumericCodeGenerator.cpp
        utlis/UIDGenerator.cpp
)