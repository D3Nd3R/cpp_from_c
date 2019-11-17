#include <psu_dev.hpp>

PsuDev::PsuDev(){
    mDevName = "psu dev";
}

BaseDev* makePsuDev()
{
    return new PsuDev();
}
