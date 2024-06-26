#include <iostream>
#include <bitset>

int main(int argc, char *argv[])
{
    std::bitset<8> bin1{0b1100'0101};
    std::bitset<8> bin2{0xC5};

    std::cout << bin1 << std::endl << bin2 << std::endl;
    std::cout << std::bitset<4>{ 0b1010 } << std::endl;
    return 0;
}