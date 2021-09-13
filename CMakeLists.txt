cmake_minimum_required(VERSION 3.20)
project(maze)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        flags
        GIT_REPOSITORY https://github.com/sailormoon/flags.git
)
FetchContent_MakeAvailable(flags)

FILE(GLOB src src/*.cc)
FILE(GLOB directors src/directors/*.cc)
include_directories(${flags_SOURCE_DIR}/include)
add_executable(maze src/main.cpp ${src} ${directors})
