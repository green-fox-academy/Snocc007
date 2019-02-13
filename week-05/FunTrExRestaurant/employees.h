//
// Created by Snöcc on 2019-02-13.
//

#ifndef FUNTREXRESTAURANT_EMPLOYEES_H
#define FUNTREXRESTAURANT_EMPLOYEES_H

#include <iostream>

class Employees
{
public:
    Employees();
    Employees(int experience);
    virtual void work() = 0;

protected:
    std::string _name;
    int _experience;


};


#endif //FUNTREXRESTAURANT_EMPLOYEES_H
