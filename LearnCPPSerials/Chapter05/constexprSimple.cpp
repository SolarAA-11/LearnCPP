#include <iostream>

int five() {
    return 5;
}

int main() 
{
    constexpr double gravity{9.8};
    constexpr int sum{4 + 5};
    constexpr int something{sum};

    int age{};
    std::cin >> age;

    constexpr int myAge{age};
    constexpr int f{five()};

    return 0;
}