#include <iostream>

int someFunction(int x)
{
  int x{};
  std::cin >> x;
  return x;
}

int main()
{
  int x{};
  std::cin >> x;
  std::cout << someFunction(x) << std::endl;
  return 0;
}
