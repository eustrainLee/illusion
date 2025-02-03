#include <iostream>
#include <string_view>

inline void foo(std::string_view str) {
    std::cout << "foo\""<< str <<"\"" << std::endl;
}