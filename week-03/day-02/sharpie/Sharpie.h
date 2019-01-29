//
// Created by Snöcc on 2019-01-29.
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <string>


class Sharpie {

public:
    Sharpie(std::string color, float width, int ink = 100);

    void use();

    std::string sharpieState();

private:
    std::string color;
    float width;
    int inkAmount;


};


#endif //SHARPIE_SHARPIE_H
