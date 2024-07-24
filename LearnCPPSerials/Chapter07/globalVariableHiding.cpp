#include <iostream>

int value{5};

int main() {
    std::cout << "Value: " << value << std::endl;

    int value{7};
    std::cout << "Local value: " << value << std::endl;

    std::cout << "Global value: " << ::value << std::endl;

    return 0;
}