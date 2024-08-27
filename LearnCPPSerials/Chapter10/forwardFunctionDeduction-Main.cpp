#include <iostream>

auto add(int x, int y);

int main() {
    std::cout << add(1, 2) << std::endl;
    return 0;
}

auto add(int x, int y) {
    return x + y;
}

