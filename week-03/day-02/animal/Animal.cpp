//
// Created by Snöcc on 2019-01-29.
//

#include "Animal.h"
#include <string>

Animal::Animal(int hungry, int thristy) {
    hunger = hungry;
    thirst = thristy;

}

void Animal::eat() {

    // int hungry;
    hunger--;


}

void Animal::drink() {


    thirst--;

}

void Animal::play() {


    hunger++;
    thirst++;

}

std::string Animal::getState() {
    std::string state = "Hunger: " + std::to_string(hunger) + " , Thirst: " + std::to_string(thirst);
    return state;

}


