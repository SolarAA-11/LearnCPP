#include <iostream>
#include <random>

int main() {
    std::mt19937 mt{};
    std::uniform_int_distribution die{1, 6};

    for(int counter{1}; counter <= 40 ; ++counter) {
        std::cout << die(mt) << " ";
        if(counter % 10 == 0) {
            std::cout << '\n';
        }
    }

    return 0;
}