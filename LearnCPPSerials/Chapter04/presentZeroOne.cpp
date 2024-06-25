#include <iostream>
#include <iomanip>

int main() {
    double x{0.1};

    std::cout << std::setprecision(17);
    std::cout << x << '\n';
    
    return 0;
}