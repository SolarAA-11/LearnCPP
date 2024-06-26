#include <iostream>

int add(const int x, const int y)
{
    return x + y;
}

int add2(constexpr int x, constexpr int y) 
{
    return x + y;
}

int main() 
{
    std::cout << add(1, 2) << '\n';
    std::cout << add2(1, 2) << '\n';
    
    return 0;
}

