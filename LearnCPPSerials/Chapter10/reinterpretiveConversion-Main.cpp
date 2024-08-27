#include <iostream>

int main() {
    int x{-100};

    unsigned int y{static_cast<unsigned int>(x)};
    std::cout << y << std::endl;

    int z{static_cast<int>(y)};
    std::cout << z << std::endl;

    return 0;
}


