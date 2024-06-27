#include <iostream>
#include <type_traits>

int getInputFromUser()
{
  int value{};
  std::cin >> value;
  return value;
}

constexpr int getValue()
{
    if(std::is_constant_evaluated())
    {
        return 0;
    } else {
        return getInputFromUser();
    }
}

constexpr int function2(int val)
{
    if(val == 0)
    {
        return 0;
    } else
    {
        return getInputFromUser();
    }
}

int main()
{
  int result{ getValue() };
  std::cout << result << std::endl;

  constexpr int constexprResult{ getValue() };
  std::cout << constexprResult << std::endl;

  int result2{ function2(10) };
  std::cout << result2 << std::endl;

  return 0;
}