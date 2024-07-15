#include <iostream>

int g_x{};

void doSomething()
{
    g_x = 3;
    std::cout << g_x << std::endl;
}

int main()
{
    doSomething();
    std::cout << g_x << std::endl;

    g_x = 5;
    std::cout << g_x << std::endl;
    
    return 0;
}