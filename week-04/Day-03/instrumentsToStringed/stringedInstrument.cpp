//
// Created by Snöcc on 2019-02-06.
//

#include "stringedInstrument.h"
#include "instrument.h"
StringedInstrument::StringedInstrument()
{

}
StringedInstrument::StringedInstrument(int stringNumber)
{
    numberOfStrings = stringNumber;
}

void StringedInstrument::play()
{
   std::cout << sound();
}