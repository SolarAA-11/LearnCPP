#include <iostream>
#include <random>



int main() {
    std::mt19937 mt{};

    for(int counter{1}; counter <= 10; ++counter) {
        std::cout << mt() << " ";
    }
    std::cout << '\n';
}
