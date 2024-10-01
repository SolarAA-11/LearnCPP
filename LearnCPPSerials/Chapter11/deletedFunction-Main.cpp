#include <iostream>

int add(int a, int b) {
    return a + b;
}

template<typename T, typename N>
int add(T a, N b) = delete;

int main() {
    std::cout << add(1, 2) << std::endl;
    std::cout << add(1, 1.1) << std::endl;

    return 0;
}