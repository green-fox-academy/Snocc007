//
// Created by Snöcc on 2019-02-06.
//

#ifndef INSTRUMENTSTOSTRINGED_VIOLIN_H
#define INSTRUMENTSTOSTRINGED_VIOLIN_H

#include "stringedInstrument.h"
#include "instrument.h"

class Violin : public StringedInstrument
{
    public:
        Violin();
        Violin(int n);
        std::string sound();
};


#endif //INSTRUMENTSTOSTRINGED_VIOLIN_H
