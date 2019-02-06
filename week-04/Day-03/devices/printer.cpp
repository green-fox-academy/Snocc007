//
// Created by Snöcc on 2019-02-06.
//

#include "printer.h"
#include <iostream>
void Printer::print()
{
   std::cout << "I'm printing something that's " << getSize() << " cm." << std::endl;
}
