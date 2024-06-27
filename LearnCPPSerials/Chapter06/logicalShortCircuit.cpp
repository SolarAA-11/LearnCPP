#include <iostream>

bool backBoolean(bool f) 
{
    std::cout << "Back boolean: " << f << std::endl;
    return f;
}

int main()
{
    bool f1{ false && backBoolean(false) };
    std::cout << f1 << std::endl;

    bool f2{ true || backBoolean(true) };
    std::cout << f2 << std::endl;

    return 0;
}
