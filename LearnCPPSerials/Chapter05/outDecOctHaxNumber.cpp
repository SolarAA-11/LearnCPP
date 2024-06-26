#include <iostream>

int main()
{
	int x{12};
	std::cout << x << std::endl;
	std::cout << std::hex << x << std::endl;
	std::cout << x << std::endl;
	std::cout << std::oct << x << std::endl;
	std::cout << std::dec << x << std::endl;
	std::cout << x << std::endl;
	return 0;
}