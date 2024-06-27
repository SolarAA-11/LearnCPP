#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::string_literals;

    std::cout << "foo" << std::endl;
    std::cout << "goo"s << std::endl;

    return 0;
}