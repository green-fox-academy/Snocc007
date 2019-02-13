#include <iostream>
#include "restaurant.h"
#include "manager.h"
#include "waiters.h"
#include "chef.h"
int main()
{
    Restaurant AurumBistro;
    Manager Gianni;
    Chef Peter;
    Waiters Snocc;
    Waiters Benji;
    Waiters Adam;
    Chef Boro;


    AurumBistro.hire(Adam);
    AurumBistro.hire(Gianni);
    AurumBistro.hire(Boro);
    AurumBistro.hire(Benji);
    AurumBistro.hire(Snocc);

    AurumBistro.guestsArrived();
    Boro.cookedMeals("Pizza");
    Boro.cookedMeals("Blue meth");
    Boro.cookedMeals("Pizza");

    Boro.printStatus();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}