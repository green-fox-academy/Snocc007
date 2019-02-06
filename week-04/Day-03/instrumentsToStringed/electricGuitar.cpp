//
// Created by Snöcc on 2019-02-06.
//

#include "electricGuitar.h"
#include "stringedInstrument.h"

ElectricGuitar::ElectricGuitar(int n) : StringedInstrument(n)
{
    name = "Electric Guitar";
    numberOfStrings = n;
}
ElectricGuitar::ElectricGuitar() : StringedInstrument()
{
    numberOfStrings = 6;
    name = "Electric Guitar";
}
std::string ElectricGuitar::sound()
{
    return name + ", a " + std::to_string(numberOfStrings) + " stringed instrument that goes Twang\n";
}