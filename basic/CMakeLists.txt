# C-Make file

# requied version for c-make
cmake_minimum_required(VERSION 3.10)

# Customize CMake
# set (var value) https://cmake.org/cmake/help/latest/command/set.html

set (CMAKE_CXXX_COMPILER D:/System/msys2/mingw64/bin/clang++)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED true)

# project name
project(BasicProject)

# add execultable file
add_executable (BasicProject 
    "./index.cpp"
    "./helper.hpp"
)

# How to compile
# mkdir build && cd build
# cmake ..          # config project
# cmake --build .   # build actual project

# Mmake Specify Generator flag

# cmake --help
# cmake -G Ninja  .. 
# cmake --build .


