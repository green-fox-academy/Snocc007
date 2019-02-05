//
// Created by Snöcc on 2019-02-04.
//

#ifndef INHERITANCE_SPONSOR_H
#define INHERITANCE_SPONSOR_H


#include "person.h"

class Sponsor : public Person
{
public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);
    void introduce() override;
    void getGoal() override;
    void hire();

private:
    std::string _company;
    int _hiredStudents;

};


#endif //INHERITANCE_SPONSOR_H
