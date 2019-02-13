//
// Created by Snöcc on 2019-02-13.
//

#ifndef FUNTREXRESTAURANT_MANAGER_H
#define FUNTREXRESTAURANT_MANAGER_H


#include "employees.h"

class Manager : public Employees
{
private:
    int _moodLevel;
public:
    Manager();
    void work() override;
    void haveMeeting();
};


#endif //FUNTREXRESTAURANT_MANAGER_H
