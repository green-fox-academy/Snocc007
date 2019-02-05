//
// Created by Snöcc on 2019-02-04.
//

#include "student.h"
#include "person.h"


Student::Student() : _previousOrganization("The School Of Life"), _skippedDays(0)
{

}
Student::Student(std::string name, int age, Gender gender, std::string previousOrganization, int skippedDays)
{

}

void Student::introduce()
{
    std::cout << "Hi, I'm " << _name << " a " << _age  << " old " << _gender
    << " from " << _previousOrganization << " who skipped " << _skippedDays << " from the course already." <<std::endl;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;

}

void Student::skipDays(int)
{
    _skippedDays += _numberOfDays;
}