#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string s{"Hello World"};
    std::string_view sv{s};

    std::cout << sv << std::endl;

    s = "Bye World";
    std::cout << sv << std::endl;

    sv = s;
    std::cout << sv << std::endl;

    return 0;
}

// output
// Hello World
// Bye World
// Bye World