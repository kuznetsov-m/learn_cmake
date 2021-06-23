added files hello.cpp and hello.h

1. add hello.h to CMakeLists.txt (to add_executable())

or add as library:
1. add add_library()

Static library (*.a):
```
add_library(
    say_hello STATIC # lib name
    hello.h   # lib list files
    hello.cpp 
)
```
Shared library (*.so / *.dylib)
```
add_library(
    say_hello SHARED # lib name
    hello.h   # lib list files
    hello.cpp 
)
```
and `target_link_libraries(my_program PRIVATE say_hello)`


Default cmake build static library. Manage this settings with flag:

`cmake -D BUILD_SHARED_LIBS=TRUE .`