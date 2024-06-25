#include <iomanip>
#include <iostream>

int main()
{
    std::cout << std::setprecision(17);

    double d1{1.0};
    std::cout << d1 << std::endl;

    double d2{0.1 + 0.1 + 0.1
                + 0.1 + 0.1 + 0.1
                + 0.1 + 0.1 + 0.1
                + 0.1};
    std::cout << d2 << std::endl;

    if(d1 == d2) {
        std::cout << "d1 == d2" << std::endl;
    } else {
        std::cout << "d1 != d2" << std::endl;
    }
}