#include <iostream>


// for 1,2,3,4 and other
void printDigitalNumber(int x) {
    
    switch(x) {
        case 1:
        std::cout << "1" << std::endl;
        break;
        case 2:
        std::cout << "2" << std::endl;
        break;
        case 3:
        std::cout << "3" << std::endl;
        break;
        case 4:
        std::cout << "4" << std::endl;
        break;
        default:
        std::cout << "Not 1,2,3,4" << std::endl;
        break;
    }
}

int main() {
	int x{};
	std::cin >> x;

    if(x == 1) {
        std::cout << "1" << std::endl;
    } else if(x == 2) {
        std::cout << "2" << std::endl;
    } else {
        std::cout << "Not 1 or 2" << std::endl;
    }

    return 0;
}