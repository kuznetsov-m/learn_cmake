add_executable(my_program main.cpp)

target_link_libraries(my_program PRIVATE say_hello)

# for my_program Target CMake requests C++17 standard compiler. 
set_target_properties(my_program PROPERTIES C_STANDARD 17 C_STANDARD_REQUIRED ON)