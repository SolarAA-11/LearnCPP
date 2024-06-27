#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view name{ "John" };
    
    std::string stringByConstructor{name};
    
    std::string stringByStaticCast{static_cast<std::string>(name)};

    std::cout << "String by constructor: " << stringByConstructor << std::endl;
    std::cout << "String by static cast: " << stringByStaticCast << std::endl;

    return 0;
}

