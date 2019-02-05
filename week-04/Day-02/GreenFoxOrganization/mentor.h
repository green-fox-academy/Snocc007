//
// Created by Snöcc on 2019-02-04.
//

#ifndef INHERITANCE_MENTOR_H
#define INHERITANCE_MENTOR_H


#include "person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};
class Mentor : public Person
{
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);

    void introduce() override;
    void getGoal() override;
    std::string getLevel(Level level);

private:
            Level _level;
};


#endif //INHERITANCE_MENTOR_H
