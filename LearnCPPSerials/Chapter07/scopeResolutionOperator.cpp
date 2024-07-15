#include <iostream>

namespace Foo
{
    int doSomething(int x, int y);
}

int doSomething(int x, int y) 
{
    std::cout << "doSomething(int, int) in global namespace" << std::endl;
    return x + y;
}

void printVal(int val)
{
    std::cout << "printVal(int) in global namespace: " << val << std::endl;
}

namespace Bar
{
    void printVal(int val)
    {
        std::cout << "printVal(int) in namespace Bar: " << val << std::endl;
    }

    void usePrintVal(int val)
    {
        printVal(val);
    }
}

int main()
{
    std::cout << Foo::doSomething(1, 2) << std::endl;
    std::cout << ::doSomething(1, 2) << std::endl;
    Bar::usePrintVal(10);
    return 0;
}