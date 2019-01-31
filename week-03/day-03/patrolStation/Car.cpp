//
// Created by Snöcc on 2019-01-30.
//

#include "Car.h"

Car::Car(int _gasAmountCar, int _capacity)
{

    gasAmountCar = _gasAmountCar;
    capacity = _capacity;
    full = false;


}

bool Car::isFull()
{

    if (gasAmountCar == capacity) {
        full = true;
    }
    return full;


}


int Car::fill()
{

    gasAmountCar++;

}