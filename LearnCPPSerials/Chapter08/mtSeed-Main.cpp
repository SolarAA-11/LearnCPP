#include <iostream>
#include <random>
#include <chrono>

int main() {
    auto seed{
        static_cast<std::mt19937::result_type>(
            std::chrono::steady_clock::now().time_since_epoch().count()
        )
    };

    std::mt19937 mt{seed};
    std::uniform_int_distribution<int> die{1, 6};
    
    for(int counter{1}; counter <= 10; ++counter) {
        std::cout << die(mt) << " ";
    }

    return 0;
}