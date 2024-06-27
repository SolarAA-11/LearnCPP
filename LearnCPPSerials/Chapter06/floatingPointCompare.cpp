#include <iostream>
#include <string>

int main()
{
    constexpr double d1{ 100.0 - 99.99 };
    constexpr double d2{ 10.0 - 9.99 };

    if(d1 == d2)
        std::cout << "d1 == d2" << std::endl;
    else if(d1 > d2)
        std::cout << "d1 > d2" << std::endl;
    else
        std::cout << "d1 < d2" << std::endl;

    return 0;
}