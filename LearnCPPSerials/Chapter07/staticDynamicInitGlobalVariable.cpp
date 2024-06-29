#include <iostream>

int init()
{
    return 6;
}

int g_staticInitVar{ 100 };
int g_dynamicInitVar{ init() };

int main()
{
    std::cout << g_staticInitVar << std::endl;
    std::cout << g_dynamicInitVar << std::endl;
    return 0;
}