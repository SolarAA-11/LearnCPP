#include <iostream>
#include <string>

int main()
{
    std::string name { "Alex" };
    std::cout << "Name: " << name << std::endl;

    const int nameLength{ static_cast<int>(name.size()) };
    std::cout << "Name Length: " << nameLength << std::endl;

    const int nameLengthBySSize{ static_cast<int>(name.size()) };
    std::cout << "Name Length(SSize): " << nameLengthBySSize << std::endl;
    return 0;
}