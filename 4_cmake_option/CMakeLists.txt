cmake_minimum_required (VERSION 2.6)

project (Tutorial)

message ("cxx Flags: " ${CMAKE_CXX_FLAGS})

add_subdirectory(app)

option(MY_VARIABLE "example value" ON)

if(MY_VARIABLE)
	message("MY_VARIABLE=${MY_VARIABLE}")
endif()