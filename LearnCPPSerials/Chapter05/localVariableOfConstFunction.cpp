#include <iostream>

consteval int doSomething(int x, int y)
{
  x = x + 1;
  int z {x + y};
  if(x > y)
    z = z - 1;

  return z;
}

constexpr int doSomething2(int x, int y) 
{
  x = x + 1;
  int z {x + y};
  if(x > y)
    z = z - 1;

  return z;
}

int main()
{
    constexpr int x{1};
    constexpr int y{2};
    constexpr int z{doSomething(x, y)};
    std::cout << z << std::endl;

    constexpr int a{doSomething2(x, y)};
    std::cout << a << std::endl;

    return 0;
}