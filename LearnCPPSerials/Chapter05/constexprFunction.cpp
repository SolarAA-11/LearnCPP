#include <iostream>

constexpr bool isGreater(int x, int y)
{
    return x > y;
}

int main()
{
    std::cout << std::boolalpha;

    constexpr int compileTimeVal1{10};
    constexpr int compileTimeVal2{20};

    std::cout << isGreater(compileTimeVal1, compileTimeVal2) << std::endl;
    std::cout << isGreater(compileTimeVal2, compileTimeVal1) << std::endl;

    // int runtimeVal1{};
    // int runtimeVal2{};

    // std::cin >> runtimeVal1 >> runtimeVal2;
    // std::cout << isGreater(runtimeVal1, runtimeVal2) << std::endl;

    constexpr int four{4};
    constexpr int five{5};
    constexpr bool isFourGreaterThanFive = isGreater(four, five);

    std::cout << isFourGreaterThanFive << std::endl;

    return 0;
}