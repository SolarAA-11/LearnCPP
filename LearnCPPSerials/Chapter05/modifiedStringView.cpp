#include <iostream>
#include <string>
#include <string_view>



int main()
{
    std::string s{"Hello World"};
    std::string_view sv{s};

    std::cout << "Before modification: " << sv << std::endl;

    s = "Goodbye World";

    std::cout << "After modification: " << sv << std::endl;

    return 0;
}