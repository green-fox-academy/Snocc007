//
// Created by Snöcc on 2019-01-29.
//

#include "Sharpie.h"
#include <string>
#include "SharpieSet.h"

Sharpie::Sharpie(std::string color_, float width_, int ink) {

    color = color_;
    width = width_;
    inkAmount = ink;


}

void Sharpie::use() {

    if (inkAmount > 0)

    inkAmount--;
}

int Sharpie::getInkAmount()
{

    return inkAmount;

}

std::string Sharpie::sharpieState()
{

    std::string state = "The amount of the ink in the " + color + " sharpie, " + std::to_string(width)
            + " wide sharpie is: " + std::to_string(getInkAmount()) + " %.";
    return state;

}