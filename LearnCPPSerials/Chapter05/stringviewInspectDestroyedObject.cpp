#include <iostream>
#include <string>
#include <string_view>

void nestedStringView()
{
    std::string_view sv;
    {
        std::string s{ "Hello World" };
        sv = s;
    }
    std::cout << sv << std::endl;
}

std::string getBoolRep(const bool f) 
{
    return f ? "true" : "false";
}

void functionReturnStringView()
{
    std::string_view sv{ getBoolRep(false) };
    std::cout << sv << std::endl;
}

void stringLiteralStringView()
{
    using namespace std::string_literals;
    std::string_view sv{ "Hello World"s };
    std::cout << sv << std::endl;
}

int main()
{
    std::cout << "Nested String View" << std::endl;
    nestedStringView();

    std::cout << std::endl << "Function Return String View" << std::endl;
    functionReturnStringView();

    std::cout << std::endl << "String Literal String View" << std::endl;
    stringLiteralStringView();

    return 0;
}

