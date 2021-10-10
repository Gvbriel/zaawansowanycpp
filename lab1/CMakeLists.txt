cmake_minimum_required(VERSION 3.20)
project(lab1)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab1 main.cpp Classes/Person.cpp Headers/Person.h Classes/Teacher.cpp Headers/Teacher.h Classes/Student.cpp Headers/Student.h Headers/Animal.h Classes/Animal.cpp Headers/Dog.h Classes/Dog.cpp Classes/Cat.cpp Headers/Cat.h)
