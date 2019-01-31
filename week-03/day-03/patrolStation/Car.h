//
// Created by Snöcc on 2019-01-30.
//

#ifndef PATROLSTATION_CAR_H
#define PATROLSTATION_CAR_H

#include <string>

class Car {

public:
    Car(int _gasAmountCar, int _capacity);

    int fill();
    bool isFull();



private:

    int gasAmountCar;
    int capacity;
    bool full;

};


#endif //PATROLSTATION_CAR_H
