#include <iostream>
#include <string>
#include "illusion/main.hpp"

auto main() -> int {
    std::string str = "Hello world";
    std::cout << str << std::endl;
    foo(str);
}
