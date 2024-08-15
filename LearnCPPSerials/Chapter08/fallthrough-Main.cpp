#include <iostream>

int main() {
	int x{12};

	switch (x) {
		case 12:
			std::cout << "12" << std::endl;
		case 14:
			std::cout << "13" << std::endl;
		default:
			std::cout << "default" << std::endl;
	}

	std::cout << "Main" << std::endl;
	return 0;
}