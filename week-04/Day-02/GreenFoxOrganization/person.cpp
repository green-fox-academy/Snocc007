//
// Created by Snöcc on 2019-02-04.
//

#include "person.h"
#include "student.h"


Person::Person(std::string name, int age, Gender gender)  : _name(name), _age(age), _gender(gender) {}

void Person::introduce()
{
    std::cout   << "Hi, I'm "
                << _name << " a "
                << _age  << " old "
                << getGender(_gender)
                << " ." << std::endl;
}

void Person::getGoal()
{
    std::cout << "My goal is: live for the moment!" << std::endl;
}

std::string Person::getGender(Gender gender)
{
    if (_gender == Gender::MALE){
        return  "male";
    } else if (_gender == Gender::FEMALE){
        return  "female";
    } else
        return  "transgender";
}

