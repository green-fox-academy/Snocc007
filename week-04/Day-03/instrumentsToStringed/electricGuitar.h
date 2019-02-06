//
// Created by Snöcc on 2019-02-06.
//

#ifndef INSTRUMENTSTOSTRINGED_GUITAR_H
#define INSTRUMENTSTOSTRINGED_GUITAR_H

#include "stringedInstrument.h"
#include "instrument.h"

class ElectricGuitar : public StringedInstrument
{
public:
    ElectricGuitar(int n);
    ElectricGuitar();
    std::string sound();
};


#endif //INSTRUMENTSTOSTRINGED_GUITAR_H
