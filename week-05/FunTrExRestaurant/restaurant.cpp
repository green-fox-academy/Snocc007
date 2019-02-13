//
// Created by Snöcc on 2019-02-13.
//

#include "restaurant.h"
void Restaurant::hire(Employees &employeeToHire)
{
    _employees.push_back(&employeeToHire);
}
void Restaurant::guestsArrived()
{
    for (int i = 0; i < _employees.size(); i++){
        _employees[i]->work();
    }
}