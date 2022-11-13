# linking using cmake

cmake_minimum_required (VERSION 3.10)

set (CMAKE_CXXX_COMPILER D:/System/msys2/mingw64/bin/clang++)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED true)

project(intermediate)

add_executable(intermediate index.cpp)



