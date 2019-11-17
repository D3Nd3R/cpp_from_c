#include <iostream>

#include <base_dev.hpp>
void BaseDev::printDevName() const
{
    std::cout << mDevName << std::endl;
}

void from_C_printDev(BaseDev *pDev){
    pDev->printDevName();
}

