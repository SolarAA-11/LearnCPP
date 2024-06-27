#include <iostream>
#include <string>

int main()
{
    std::string line1{};
    std::string line2{};

    std::getline(std::cin, line1);
    std::getline(std::cin, line2);

    std::cout << line1 << std::endl;
    std::cout << line2 << std::endl;

    return 0;
}