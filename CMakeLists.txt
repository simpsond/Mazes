cmake_minimum_required(VERSION 3.20)
project(maze)

set(CMAKE_CXX_STANDARD 20)

FILE(GLOB src src/*.cc)
FILE(GLOB directors src/directors/*.cc)
add_executable(maze src/main.cpp ${src} ${directors})
