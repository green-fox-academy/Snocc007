//
// Created by Snöcc on 2019-01-29.
//

#include "Animal.h"
#include <string>
#include <iostream>

Animal::Animal()
{

    hunger = 50;
    thirst = 50;

};


void Animal::eat()
{

    // int hungry;
    hunger--;


}

void Animal::drink()
{


    thirst--;

}

void Animal::play()
{


    hunger++;
    thirst++;

}

std::string Animal::getState()
{
    std::string state = "Hunger: " + std::to_string(hunger) + " , Thirst: " + std::to_string(thirst);
    return state;

}


