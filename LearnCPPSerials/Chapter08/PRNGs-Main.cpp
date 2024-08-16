#include <iostream>

int PRNG() {
    static unsigned int s_state{3};

    s_state = 8253729 * s_state + 2396403;
    return s_state % 32768;
}

int main() {
    for (int count{1}; count <= 100; ++count) {
        std::cout << PRNG() << '\t';

        if (count % 5 == 0)
            std::cout << '\n';
    }

    return 0;
}