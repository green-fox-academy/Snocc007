//
// Created by Snöcc on 2019-02-06.
//

#ifndef INSTRUMENTSTOSTRINGED_BASSGUITAR_H
#define INSTRUMENTSTOSTRINGED_BASSGUITAR_H

#include "stringedInstrument.h"
#include "instrument.h"


class BassGuitar : public StringedInstrument
{
    public:
        BassGuitar();
        BassGuitar(int n);
        std::string sound();
};


#endif //INSTRUMENTSTOSTRINGED_BASSGUITAR_H
