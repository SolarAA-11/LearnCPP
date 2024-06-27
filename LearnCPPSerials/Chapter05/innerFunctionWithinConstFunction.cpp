#include <iostream>

constexpr int goo(int c)
{
    return c;
}

constexpr int foo(int b)
{
    return goo(b);
}

consteval int constevalGoo(int x)
{
    return x;
}

consteval int constevalFoo(int x)
{
    return constevalGoo(x);
}



consteval int constevalFunc(int x)
{
    std::cin >> x;
    return x;
}

int main()
{
    std::cout << foo(1) << std::endl;

    constexpr int x {1};
    constexpr int y {constevalFoo(x)}; 
    constexpr int z {constevalFoo(1)};

    std::cout << x << ":" << y << ":" << z << std::endl;

    constexpr int inputValue{ constevalFunc(0) };

    return 0;
}