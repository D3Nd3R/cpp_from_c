#pragma once

#include <base_dev.hpp>

class SffDev : public BaseDev{

public:
    SffDev();
};
extern "C" {
    BaseDev* makeSffDev();
}