//
// Created by Snöcc on 2019-01-29.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <string>


class Animal {

public:
    Animal();

    void eat();

    void drink();

    void play();

    std::string getState();

private:
    int hunger;
    int thirst;


};


#endif //ANIMAL_ANIMAL_H
