//
// Created by Snöcc on 2019-02-13.
//

#ifndef FUNTREXRESTAURANT_WAITERS_H
#define FUNTREXRESTAURANT_WAITERS_H


#include "employees.h"

class Waiters : public Employees
{
public:
    void work() override;

private:
    int _tips;

};


#endif //FUNTREXRESTAURANT_WAITERS_H
