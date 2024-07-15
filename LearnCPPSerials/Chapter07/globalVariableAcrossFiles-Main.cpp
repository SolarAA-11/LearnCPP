#include <iostream>

extern int g_x;
int g_y{g_x};

int main()
{
    std::cout << g_y << std::endl;
    return 0;
}