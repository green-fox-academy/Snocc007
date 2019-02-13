//
// Created by Snöcc on 2019-02-13.
//

#ifndef FUNTREXRESTAURANT_RESTAURANT_H
#define FUNTREXRESTAURANT_RESTAURANT_H

#include "employees.h"
#include <iostream>
#include <vector>
class Restaurant
{
public:
    void hire(Employees &employeeToAdd);
    void guestsArrived();
private:
    std::string _name;
    int _founded;
    std::vector<Employees*>_employees;


};


#endif //FUNTREXRESTAURANT_RESTAURANT_H
