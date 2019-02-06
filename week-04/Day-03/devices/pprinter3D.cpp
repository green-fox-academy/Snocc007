//
// Created by Snöcc on 2019-02-06.
//

#include "pprinter3D.h"

Printer3D::Printer3D(int sizeX, int sizeY, int sizeZ)
{
    _sizeX = sizeX;
    _sizeY = sizeY;
    _sizeZ = sizeZ;
}

std::string Printer3D::getSize()
{
    return std::to_string(_sizeX) + " x " + std::to_string(_sizeY) + " x " + std::to_string(_sizeZ);
}



