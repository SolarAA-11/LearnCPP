#include <cassert>
#include <cmath>
#include <iostream>

double calculateTimeUntilObjectHitsGround(double height, double gravity) {
    assert(gravity > 0.0);

    if(height <= 0.0) {
        return 0.0;
    }

    return std::sqrt(2.0 * height / gravity);
}

int main() {
    std::cout << calculateTimeUntilObjectHitsGround(100.0, -9.8) << std::endl;
    return 0;
}