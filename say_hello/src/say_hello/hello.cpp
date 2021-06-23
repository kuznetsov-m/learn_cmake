#include "hello.h"

#include <iostream>

void hello::say_hello() {
    std::cout << "Hi there! From say_hello version " << SAY_HELLO_VERSION << std::endl;
}