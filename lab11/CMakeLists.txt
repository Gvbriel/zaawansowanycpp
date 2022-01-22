cmake_minimum_required(VERSION 3.20)
project(lab11)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab11 main.cpp Buffer.cpp Buffer.h cmake-build-debug/BufferArr.cpp cmake-build-debug/BufferArr.h BufferFile.cpp BufferFile.h)
