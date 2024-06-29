#include <iostream>

extern int g_x;
extern const int g_cx;

int main()
{
    std::cout << g_x << std::endl;
    std::cout << g_cx << std::endl;
    return 0;
}