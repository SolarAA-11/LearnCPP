#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string s{ "Hello World" };
    std::string_view sv{s};

    std::cout << "String View Before Modification: " << sv << std::endl;

    s = "Goodbye World";

    std::cout << "String View After Modification: " << sv << std::endl;

    sv = s;
    
    std::cout << "String View After Revalidation: " << sv << std::endl;

    return 0;
}