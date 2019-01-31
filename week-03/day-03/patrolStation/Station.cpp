//
// Created by Snöcc on 2019-01-30.
//

#include "Station.h"
#include "Car.h"
#include <string>
#include <iostream>

Station::Station(int gasAmountStation) {

    _gasAmountStation = gasAmountStation;

}

// fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print
// "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station

void Station::fill(Car &carName)

{
    if (!carName.isFull()) {
        carName.fill();
        std::cout << "Filling vehicle..." << std::endl;
        _gasAmountStation--;

    } else
        std::cout << "The vehicle's tank is full... \n"
                     "The station's remaining amount of petrol is " << _gasAmountStation << " units" << std::endl;


}
