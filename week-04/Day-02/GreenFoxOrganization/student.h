//
// Created by Snöcc on 2019-02-04.
//

#ifndef INHERITANCE_STUDENT_H
#define INHERITANCE_STUDENT_H

#include "person.h"

class Student : public Person
        {

public:
            Student();
            Student(std::string name, int age, Gender gender, std::string previousOrganization, int skippedDays = 0);
    void introduce() override;
    void getGoal() override;
    void skipDays(int);
private:
    std::string _previousOrganization;
    int _skippedDays;
    int _numberOfDays;


};


#endif //INHERITANCE_STUDENT_H
