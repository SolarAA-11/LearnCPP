#include <iostream>

unsigned int g_state{0};

void seedPRNG(unsigned int seed) {
    g_state = seed;
}

unsigned int LCG16() {
    g_state = 8253729 * g_state + 2396403;
    return g_state % 32768;
}

// Print 10 numbers
void printTenNumbers() {
    for (int count{1}; count <= 10; ++count) {
        std::cout << LCG16() << '\t';
    }

    std::cout << '\n';
}

int main() {
    std::cout << "Enter a seed value: ";

    unsigned int seed{};
    std::cin >> seed;

    seedPRNG(seed);
    printTenNumbers();
}
