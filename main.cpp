#include <iostream>

#include "./dll.h"

int main() {
    int a = 5;
    int b = 10;
    int c = add(a, b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c (a+b) >> " << c << std::endl;
}
