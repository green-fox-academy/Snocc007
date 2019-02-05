//
// Created by Snöcc on 2019-02-05.
//

#include "cohort.h"
#include "student.h"

Cohort::Cohort(std::string name) :
_name(name)
{
    Students = {};
    Mentors = {};
}
void Cohort::addStudent(Student* studentName)
{
    Students.push_back(studentName);
}
void Cohort::addMentor(Mentor* mentorName)
{
    Mentors.push_back(mentorName);
}
void Cohort::info()
{
    std::cout << "The " << _name << " cohort has " << Students.size() << " students"
    << " and " << Mentors.size() << " mentors." << std::endl;
}