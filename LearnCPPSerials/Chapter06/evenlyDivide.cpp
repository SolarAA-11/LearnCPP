#include <iostream>
#include <string>

int main()
{
    int x{};
    int y{};
    std::cin >> x;
    std::cin >> y;

    std::cout << "The remainder of " << x << " divided by " << y << " is " << x % y << "." << std::endl;

    return 0;
}