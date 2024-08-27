#include <iostream>

int main() {
    auto s{ "Hello World" };

    using namespace std::literals;

    auto s1{ "Goo"s };
    auto s2{ "Moo"sv };

    return 0;
}