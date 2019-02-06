//
// Created by Snöcc on 2019-02-06.
//

#include "scanner.h"
#include <iostream>

Scanner::Scanner(int speed)
{
    _speed = speed;
}

void Scanner::set_speed(int _speed)
{
    Scanner::_speed = _speed;
}

void Scanner::scan()
{
    std::cout << "I'm scanning a document " << _speed << " ppm" << std::endl;
}