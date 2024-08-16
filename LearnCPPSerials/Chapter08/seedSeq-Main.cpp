#include <iostream>
#include <random>

int main() {
    std::random_device rd{};
    
    std::seed_seq seed{rd(), rd(), rd(), rd(), rd(), rd()};
    std::mt19937 mt{seed};
    std::uniform_int_distribution<int> die{1, 6};

    for(int counter{1}; counter <= 100; ++counter) {
        std::cout << die(mt) << " ";
        if(counter % 10 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}
