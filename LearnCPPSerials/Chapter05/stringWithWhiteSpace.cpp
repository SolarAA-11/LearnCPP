#include <iostream>
#include <string>


int main()
{
    std::string name{};
    std::cin >> name;

    std::string color{};
    std::cin >> color;

    std::cout << "Name: " << name << ", Color: " << color << std::endl;

    std::string fullName{};
    std::getline(std::cin, fullName);
    std::cout << "Full Name: " << fullName << std::endl;

    return 0;
}