//
// Created by Snöcc on 2019-02-04.
//

#include "mentor.h"


Mentor::Mentor() : _level(INTERMEDIATE)
{

}
Mentor::Mentor(std::string name, int age, Gender gender, Level level)
{

}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << _name
    << " a " << _age  << " old "
    << getGender(_gender)
    << " " << Mentor::getLevel(_level) << std::endl;
}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;

}

std::string Mentor::getLevel(Level level)
{
    if (level == JUNIOR) {
        return "junior";
    } else if (level == INTERMEDIATE) {
        return "intermediate";
    } else
        return "senior";
}