//
// Created by Snöcc on 2019-02-13.
//

#ifndef FUNTREXRESTAURANT_CHEF_H
#define FUNTREXRESTAURANT_CHEF_H


#include "employees.h"
#include <iostream>
#include <vector>
#include <map>

class Chef : public Employees
{
public:
    void work() override;
    void cookedMeals(std::string meal);

    void printStatus();

private:
    std::map<std::string,int>_meals;
};


#endif //FUNTREXRESTAURANT_CHEF_H
