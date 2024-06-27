#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string s{ "Hello World" };
    
    std::string_view sv{ s };
    std::cout << sv << std::endl;

    sv.remove_prefix(3);
    std::cout << "After remove_prefix(3): " << sv << std::endl;

    sv.remove_suffix(3);
    std::cout << "After remove_suffix(3): " << sv << std::endl;

    sv = s;
    std::cout << "After revalidation: " << sv << std::endl;

    return 0;
}