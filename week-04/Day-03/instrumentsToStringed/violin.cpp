//
// Created by Snöcc on 2019-02-06.
//

#include "violin.h"
#include "stringedInstrument.h"
Violin::Violin() : StringedInstrument()
{
    numberOfStrings = 4;
    name = "Violin";
}
Violin::Violin(int n) : StringedInstrument(n)
{
    numberOfStrings = n;
    name = "Violin";
}
std::string Violin::sound()
{
    return name + ", a " + std::to_string(numberOfStrings) + "-stringed instrument that goes Schreech\n";
}