cmake_minimum_required(VERSION 3.10)
project(opengl_startup)

set(CMAKE_CXX_COMPILER D:/System/msys2/mingw64/bin/clang++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  opengl_startup
  main.cpp
)
