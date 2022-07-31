cmake_minimum_required(VERSION 3.22)
project(Library)

set(CMAKE_CXX_STANDARD 14)

add_executable(Library main.cpp Library_commands.cpp Library_commands.h Library_control.cpp Library_control.h Library_viewer.cpp Library_viewer.h Person.cpp Person.h)
