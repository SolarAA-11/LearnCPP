#include "externalLinkageConstantGlobalVariable-A.hpp"

#include <iostream>

int main()
{
    std::cout << Constants::pi << std::endl;
    std::cout << Constants::avogadro << std::endl;
    std::cout << Constants::myGravity << std::endl;
    return 0;
}