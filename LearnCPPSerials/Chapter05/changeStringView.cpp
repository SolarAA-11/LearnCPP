#include <iostream>
#include <string>
#include <string_view>

int main() 
{
    std::string_view sv{"abc"};
    std::cout << sv << std::endl;

    sv = "123";
    std::cout << sv << std::endl;

    std::string s{"def"};
    sv = s;
    std::cout << sv << std::endl;

    return 0;
}