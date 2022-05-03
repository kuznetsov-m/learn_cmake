[source lesson](https://www.youtube.com/watch?v=SYgESCQeGJY)

target_include_directories(say_hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_compile_definitions(say_hello PUBLIC SAY_HELLO_VERSION=3)
target_compile_definitions(say_hello PRIVATE SAY_HELLO_VERSION=3) # access inside lib only
target_compile_definitions(say_hello INTERFACE SAY_HELLO_VERSION=3) # access outside lib only


cmake build command:

```
mkdir build
cd build

cmake -G "Unix Makefiles" ../
# or
cmake -G "Visual Studio 17 2022" ../
```