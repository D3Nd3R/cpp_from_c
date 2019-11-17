#pragma once

#include <string>

class BaseDev{

public:
    virtual void printDevName() const;

protected:
    std::string mDevName;

};

extern "C"{
    void from_C_printDev(BaseDev *pDev);
}
