#pragma once

#include <base_dev.hpp>

class PsuDev : public BaseDev{

public:
    PsuDev();
};

extern "C"{
    BaseDev* makePsuDev();
}