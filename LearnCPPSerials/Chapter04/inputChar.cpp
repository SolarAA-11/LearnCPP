#include <iostream>

int main() {
    char c;
    for(int i = 0; i < 10; ++i) {
        std::cin >> c;
        std::cout << "Get Char: " << c << std::endl;
    }
    std::cout << "Finish Read" << std::endl;
    return 0;
}