#include <iostream>
#include <string>
#include <string_view>

void printString(std::string str)
{
    std::cout << str << std::endl;
}

void printSV(std::string_view sv)
{
    std::cout << sv << std::endl;
}

int main()
{
    std::string name{"John Doe"};
    std::cout << "Name: " << name << std::endl;

    std::string favoriteFood{ "noodles" };
    printString(favoriteFood);

    std::string_view sv { "Hello World!" };
    printSV(sv);

    return 0;
}