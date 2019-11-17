#include <sff_dev.hpp>

SffDev::SffDev(){
    mDevName = "sff dev";
}

BaseDev* makeSffDev()
{
    return new SffDev();
}
