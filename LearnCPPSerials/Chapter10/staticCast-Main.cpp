#include <iostream>

int main() {
    int x{10};
    int y{4};

    double d{ static_cast<double>(x) / y };
    std::cout << d << std::endl;

    const int z{5};
    // int& ref{ static_cast<int&>(z) };   // compile error
    // ref = 6;

    return 0;
}
