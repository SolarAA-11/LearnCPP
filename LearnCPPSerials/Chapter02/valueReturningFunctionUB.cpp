#include <iostream>

int getValueFromUserUb() {
  std::cout << "Enter an Integer";
  int input{};
  std::cin >> input;
}

int main() {
  int num { getValueFromUserUb() };
  std::cout << num << std::endl;
  return 0;
}