#include <iostream>
#include <string>

int main()
{
    std::string name{};
    std::getline(std::cin, name);
    std::cout << "Name Length: " << name.length() << std::endl;
    return 0;
}