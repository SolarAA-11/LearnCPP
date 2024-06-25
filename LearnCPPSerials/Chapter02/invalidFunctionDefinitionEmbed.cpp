#include <iostream>

int main() {
    void foo() {
        std::cout << "In Foo()" << std::endl;
    }
    foo();
    return 0;
}