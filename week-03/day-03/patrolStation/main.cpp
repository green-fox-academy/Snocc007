#include <iostream>
#include "Car.h"
#include "Station.h"


int main() {

    Station MOL;

    Car FordCMax = Car(75, 120);
    Car ToyotaCorolla = Car(90, 100);
    Car SeatLeon = Car(25, 100);
    Car HondaAccord = Car(100, 120);
    Car Peugeot206 = Car(10, 100);


    for (int i = 0; i < 50; i++) {

        MOL.fill(FordCMax);

    }


    return 0;
}