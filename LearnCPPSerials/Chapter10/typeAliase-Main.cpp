#include <iostream>

int main() {
    using Distance = double;

    Distance milesToDest{ 3.4 };
    std::cout << milesToDest << std::endl;

    using Miles = long;
    using Speed = long;

    Miles distance{5};
    Speed mhz{3200};

    distance = mhz;

    return 0;
}