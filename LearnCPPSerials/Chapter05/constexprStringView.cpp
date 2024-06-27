#include <iostream>
#include <string>
#include <string_view>



int main()
{
    using namespace std::string_view_literals;
    constexpr std::string_view nameLiteral{ "Jack"sv };
    std::cout << nameLiteral << std::endl;

    return 0;
}