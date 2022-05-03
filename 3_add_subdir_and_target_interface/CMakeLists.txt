cmake_minimum_required(VERSION 3.12)
project(my_project VERSION 1.0.0)

add_subdirectory(say_hello)
add_subdirectory(hello_exe)

# VS_STARTUP_PROJECT
# for MS Visual Studio set project for default run
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT my_program)