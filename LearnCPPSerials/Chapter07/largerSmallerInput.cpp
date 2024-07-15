#include <iostream>

int main()
{
    int smaller {};
    std::cin >> smaller;

    int larger{};
    std::cin >> larger;

    if(smaller > larger)
    {
        int temp{};
        temp = larger;
        larger = smaller;
        smaller = temp;
    }

    std::cout << "The smaller number is " << smaller << " and the larger number is " << larger << "." << std::endl;
    return 0;
}