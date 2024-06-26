#include <iostream>
#include <type_traits>

constexpr int someFunction()
{
    if(std::is_constant_evaluated())
    {
        return 1;
    } else
    {
        return 0;
    }
}

constexpr int someFunction2()
{
    if consteval {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    constexpr int x{ someFunction() };
    int y{ someFunction() };

    std::cout << x << " " << y << std::endl;

    constexpr int a{ someFunction2() };
    int b{ someFunction2() };

    std::cout << a << " " << b << std::endl;

    return 0;
}