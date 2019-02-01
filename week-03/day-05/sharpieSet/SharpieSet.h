//
// Created by Snöcc on 2019-01-31.
//

#ifndef SHARPIESET_SHARPIESET_H
#define SHARPIESET_SHARPIESET_H

#include "Sharpie.h"
#include <vector>


class SharpieSet {



public:
    SharpieSet(std::vector<Sharpie> x);
    int countUsable();
    void removeTrash();


private:

    std::vector<Sharpie>setOfSharpies;
};


#endif //SHARPIESET_SHARPIESET_H
