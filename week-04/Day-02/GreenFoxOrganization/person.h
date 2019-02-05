//
// Created by Snöcc on 2019-02-04.
//

#ifndef INHERITANCE_PERSON_H
#define INHERITANCE_PERSON_H
#include <iostream>

enum Gender {
    MALE,
    FEMALE,
    TRANSGENDER
};


class Person {

public:
    Person (std::string name = "Jane Doe", int age = 30, Gender gender = FEMALE);



    virtual void introduce();
    virtual void getGoal();
    std::string getGender(Gender gender);

protected:
    std::string _name;
    int _age;
    Gender _gender;


};


#endif //INHERITANCE_PERSON_H
