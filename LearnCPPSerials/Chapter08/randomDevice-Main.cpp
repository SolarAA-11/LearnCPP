#include <iostream>
#include <random>

int main() {
    auto seed{
        static_cast<std::random_device::result_type>(
            std::random_device{}()
        )
    };

    std::mt19937 mt{seed};
    std::uniform_int_distribution<int> die{1, 6};

    for(int counter{1}; counter <= 10; ++counter) {
        std::cout << die(mt) << " ";
    }

    return 0;
}
