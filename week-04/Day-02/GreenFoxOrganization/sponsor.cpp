//
// Created by Snöcc on 2019-02-04.
//

#include "sponsor.h"
Sponsor::Sponsor() : _company("Google"), _hiredStudents(0)
{

}
Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company)
{

}
void Sponsor::introduce()
{
    std::cout << "Hi, I'm " << _name << " a " << _age  << " old " << _gender <<
    " represents " << _company << " and hired " << _hiredStudents << std::endl;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents++;
}