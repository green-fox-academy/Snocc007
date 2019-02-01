//
// Created by Snöcc on 2019-01-29.
//

#include "Sharpie.h"
#include <string>

Sharpie::Sharpie(std::string color_, float width_)
{

    color = color_;
    width = width_;
    inkAmount = 100;


}

void Sharpie::use()
{

    inkAmount--;
}

std::string Sharpie::sharpieState()
{

    std::string state = "The ink state of the " + color + ", " + std::to_string(width)
            + " wide sharpie is: " + std::to_string(inkAmount) + " %.";
    return state;

}