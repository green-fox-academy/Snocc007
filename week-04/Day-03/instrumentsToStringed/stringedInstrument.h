//
// Created by Snöcc on 2019-02-06.
//

#ifndef INSTRUMENTSTOSTRINGED_STRINGEDINSTRUMENT_H
#define INSTRUMENTSTOSTRINGED_STRINGEDINSTRUMENT_H

#include "instrument.h"

class StringedInstrument : public Instrument
{
protected:
    int numberOfStrings;
public:
    StringedInstrument();
    StringedInstrument(int stringNumber);
    void play();
    std::string virtual sound() = 0;
};


#endif //INSTRUMENTSTOSTRINGED_STRINGEDINSTRUMENT_H
