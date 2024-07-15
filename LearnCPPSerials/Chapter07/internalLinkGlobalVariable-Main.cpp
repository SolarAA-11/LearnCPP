#include <iostream>

void showGlobalVariable();

const int g_x{12};

int main()
{
    std::cout << g_x << std::endl;
    showGlobalVariable();
    return 0;
}

