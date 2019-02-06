//
// Created by Snöcc on 2019-02-06.
//

#include "copier.h"
#include <iostream>

Copier::Copier(int sizeX, int sizeY, int speed) : Scanner(speed), Printer2D(sizeX, sizeY)
{
 Printer2D::set_sizeX(sizeX);
 Printer2D::set_sizeY(sizeY);
 Scanner::set_speed(speed);
}
void Copier::copy()
{
    scan();
    std::cout << " and ";
    print();
 }