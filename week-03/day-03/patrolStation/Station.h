//
// Created by Snöcc on 2019-01-30.
//

#ifndef PATROLSTATION_PETROL_H
#define PATROLSTATION_PETROL_H

#include <string>
#include "Car.h"


class Station {

public:
    Station(int gasAmountStation = 10000);
    void fill(Car &carName);

private:
    int _gasAmountStation;

};


#endif //PATROLSTATION_PETROL_H
