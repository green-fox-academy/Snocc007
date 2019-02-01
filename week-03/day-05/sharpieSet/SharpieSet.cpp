//
// Created by Snöcc on 2019-01-31.
//

#include "SharpieSet.h"
#include "Sharpie.h"
#include <vector>


SharpieSet::SharpieSet(std::vector<Sharpie> x)
{

    setOfSharpies = x;

}

int SharpieSet::countUsable()
{
    int tempSharpies = 0;

    for (int i = 0; i < setOfSharpies.size(); i++) {

        if (setOfSharpies[i].getInkAmount() > 0) {


        }
        tempSharpies++;


    }
    return tempSharpies;
}

void SharpieSet::removeTrash()
{
    for (int i = 0; i < setOfSharpies.size(); i++) {

        if (setOfSharpies[i].getInkAmount() == 0) {

            setOfSharpies.erase(setOfSharpies.begin() + i);

            i--;
        }
    }
}