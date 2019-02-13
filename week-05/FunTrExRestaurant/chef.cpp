//
// Created by Snöcc on 2019-02-13.
//

#include "chef.h"
#include <map>
void Chef::work()
{
    _experience++;
}
void Chef::cookedMeals(std::string meal)
{
    if (_meals.count(meal)) {
        _meals[meal]++;
    } else {
        _meals[meal] = 1;
    }
}

void Chef::printStatus()
{
    for(const auto& it : _meals)
        std::cout << it.first << ": " << it.second<<std::endl;
}
