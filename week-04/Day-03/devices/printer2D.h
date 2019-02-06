//
// Created by Snöcc on 2019-02-06.
//

#ifndef DEVICES_PRINTER2D_H
#define DEVICES_PRINTER2D_H

#include "printer.h"

class Printer2D : public Printer
{
private:
    int _sizeX;
    int _sizeY;
public:
    Printer2D(int sizeX, int sizeY);
    std::string getSize() override;

    void set_sizeX(int _sizeX);

    void set_sizeY(int _sizeY);
};


#endif //DEVICES_PRINTER2D_H
