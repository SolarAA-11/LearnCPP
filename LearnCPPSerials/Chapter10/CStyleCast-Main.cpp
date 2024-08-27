#include <iostream>

int main() {
    int x{10};
    int y{4};

    double d{ (double)x / y };
    std::cout << d << std::endl;

    double e{ double(x) / y };
    std::cout << e << std::endl;

    return 0;
}