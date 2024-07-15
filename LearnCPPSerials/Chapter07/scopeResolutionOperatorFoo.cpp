#include <iostream>


namespace Foo
{
    int doSomething(int x, int y)
    {
        std::cout << "doSomething(int, int) in namespace Foo" << std::endl;
        return x + y;
    }
}
