#include <iostream>
#include <say_hello/hello.h>

int main() {
    hello::say_hello();

    std::cout << "The say_hello version " << SAY_HELLO_VERSION << std::endl;
}