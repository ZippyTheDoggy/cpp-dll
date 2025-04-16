#include <iostream>

#include "./dll.h"

void print_op(int a, int b, char op, int result) {
    std::cout << "(a " << op << " b :: " << a << " " << op << " " << b << " = " << result << std::endl;
}

int main() {
    int a = 5;
    int b = 10;

    print_op(a, b, '+', add(a, b));
    print_op(a, b, '-', sub(a, b));
    print_op(a, b, '*', mul(a, b));
    print_op(a, b, '/', div(a, b));
    
}
