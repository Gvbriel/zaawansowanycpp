cmake_minimum_required(VERSION 3.20)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4 main.cpp Class/Citizen.cpp Headers/Citizen.h Class/City.cpp Headers/City.h Class/PostalCode.cpp Headers/PostalCode.h)
