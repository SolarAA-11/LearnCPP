#include "globalRandomGenerator.hpp"

#include <iostream>

int main() {
    std::cout << "Random int: " << Random::get(1, 6) << '\n';
    std::cout << "Random double: " << Random::get(1.0, 6.0) << '\n';
}