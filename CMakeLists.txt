cmake_minimum_required(VERSION 3.5)

project(QtCode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(Qt5_DIR "/home/qiang/Qt5.12.11/5.12.11/gcc_64/lib/cmake/Qt5")
#set(Qt5_DIR "/home/qiang/Qt5.12.9/5.12.9/gcc_64/lib/cmake/Qt5")

include(level_basic.cmake)
include(level_middle.cmake)