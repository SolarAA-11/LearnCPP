#include <iostream>
#include <string>

consteval auto compileTimeEval(auto value)
{
    return value;
}

constexpr int greaterConstexpr(int x, int y)
{
    return x > y ? x : y;
}

consteval int greater(int x, int y)
{
    return x > y ? x : y;
}

consteval std::string biggerName(int x, int y) 
{
    if(x > y) {
        return "First";
    } else {
        return "Second";
    }
}

int main()
{
    constexpr int x{greater(1, 2)};
    std::cout << x << std::endl;

    int y{greater(3, 4)};
    std::cout << y << std::endl;

    std::cout << greaterConstexpr(5, 6) << std::endl;
    std::cout << compileTimeEval(greaterConstexpr(7, 8)) << std::endl;

    int z{  5 };
    std::cout << greaterConstexpr(z, 6) << std::endl;

    constexpr std::string str{biggerName(1, 2)};
    std::cout << str << std::endl;

    return 0;
}