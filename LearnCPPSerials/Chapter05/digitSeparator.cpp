#include <iostream>

int main()
{
    int x{1'000'000};
    std::cout << std::showbase << x << std::endl;
    std::cout << std::showbase << std::hex << x << std::endl;
    return 0;
}