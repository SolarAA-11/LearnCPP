#include <iostream>
#include <cstdlib>

class A {
    public:
    ~A() {
        std::cout << "Destructor of A" << std::endl;
    }
};

int main() {
    static A a;
    std::cout << "Before quick_exit" << std::endl;
    // std::quick_exit(0);
    std::exit(0);   
    std::cout << "After quick_exit" << std::endl;
}
