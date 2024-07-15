#include <iostream>

namespace Boo
{
    int doSomething(int x, int y)
    {
        std::cout << "doSomething(int, int) in namespace Boo" << std::endl;
        return x + y;
    }
} // namespace Boo
