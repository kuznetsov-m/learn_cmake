cmake_minimum_required(VERSION 3.12)
project(my_project VERSION 1.0.0)

add_library(
    say_hello # lib name
    hello.h   # lib list files
    hello.cpp 
)

add_executable(my_program main.cpp)

target_link_libraries(my_program PRIVATE say_hello)