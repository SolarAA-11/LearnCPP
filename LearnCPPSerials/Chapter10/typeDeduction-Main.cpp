#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    auto d{ 5.0 };
    auto i{ 1 + 2 };
    auto x{ i };

    auto sum{ add(5, 6) };

    auto a{ 1.23f };
    auto b{ 5u };

    const int cx{ 5 };
    auto y{ x };

    constexpr auto cz{ cx };
}