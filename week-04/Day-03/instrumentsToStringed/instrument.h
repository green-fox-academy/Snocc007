//
// Created by Snöcc on 2019-02-06.
//

#ifndef INSTRUMENTSTOSTRINGED_INSTRUMENT_H
#define INSTRUMENTSTOSTRINGED_INSTRUMENT_H

#include <iostream>


class Instrument
{
protected:
    std::string name = "";
public:
    Instrument();
    virtual void play() = 0;
};


#endif //INSTRUMENTSTOSTRINGED_INSTRUMENT_H
