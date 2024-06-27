#include <iostream>
#include <string>

int main() 
{
    int a{};
    int b{};

    a = 7;
    b = 4;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a/b = " << a / b << std::endl;
    std::cout << "a%b = " << a % b << std::endl;
    std::cout << "------------" << std::endl;

    a = -7;
    b = 4;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a/b = " << a / b << std::endl;
    std::cout << "a%b = " << a % b << std::endl;
    std::cout << "------------" << std::endl;

    a = 7;
    b = -4;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a/b = " << a / b << std::endl;
    std::cout << "a%b = " << a % b << std::endl;
    std::cout << "------------" << std::endl;

    a = -7;
    b = -4;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a/b = " << a / b << std::endl;
    std::cout << "a%b = " << a % b << std::endl;

    return 0;
}