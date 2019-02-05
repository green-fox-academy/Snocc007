//
// Created by Snöcc on 2019-02-05.
//

#ifndef INHERITANCE_COHORT_H
#define INHERITANCE_COHORT_H

#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort {

public:
    Cohort(std::string name);
    void addStudent(Student* studentName);
    void addMentor(Mentor* mentorName);
    void info();


private:
    std::vector<Student*> Students;
    std::vector<Mentor*> Mentors;
    std::string _name;



};


#endif //INHERITANCE_COHORT_H
