//
// Created by Snöcc on 2019-02-06.
//

#ifndef DEVICES_PPRINTER3D_H
#define DEVICES_PPRINTER3D_H

#include "printer.h"

class Printer3D : public Printer
{
private:
    int _sizeX;
    int _sizeY;
    int _sizeZ;

public:
    Printer3D(int sizeX, int sizeY, int sizeZ);
    std::string getSize() override;

};


#endif //DEVICES_PPRINTER3D_H
