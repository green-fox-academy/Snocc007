//
// Created by Snöcc on 2019-01-29.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <string>


class Animal {

public:
    Animal(int hungry = 50, int thirsty = 50);

    void eat();

    void drink();

    void play();

    std::string getState();

private:
    int hunger;
    int thirst;


};


#endif //ANIMAL_ANIMAL_H
