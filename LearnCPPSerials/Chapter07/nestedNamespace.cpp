#include <iostream>

namespace Foo
{
    namespace Goo
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}

namespace Foo::Goo
{
    int minus(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    std::cout << Foo::Goo::add(1, 2) << std::endl;
    std::cout << Foo::Goo::minus(1, 2) << std::endl;
    return 0;
}