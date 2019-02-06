//
// Created by Snöcc on 2019-02-06.
//

#include "printer2D.h"

Printer2D::Printer2D(int sizeX, int sizeY)
{
    _sizeX = sizeX;
    _sizeY = sizeY;
}

void Printer2D::set_sizeX(int _sizeX)
{
    Printer2D::_sizeX = _sizeX;
}

void Printer2D::set_sizeY(int _sizeY)
{
    Printer2D::_sizeY = _sizeY;
}

std::string Printer2D::getSize()
{
    return std::to_string(_sizeX) + " x " + std::to_string(_sizeY);
}