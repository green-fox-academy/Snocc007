//
// Created by Snöcc on 2019-02-06.
//

#include "bassGuitar.h"
#include "stringedInstrument.h"
#include "instrument.h"

BassGuitar::BassGuitar() : StringedInstrument()
{
    numberOfStrings = 4;
    name = "Bass Guitar";
}
BassGuitar::BassGuitar(int n) : StringedInstrument(n)
{
    numberOfStrings = n;
    name = "Bass Guitar";
}
std::string BassGuitar::sound()
{
    return name +", a " + std::to_string(numberOfStrings) + " stringed instrument that goes Duum-duum-duum\n";
}