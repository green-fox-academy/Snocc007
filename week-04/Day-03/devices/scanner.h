//
// Created by Snöcc on 2019-02-06.
//

#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H


class Scanner
{
private:
    int _speed;
public:
    Scanner(int speed);
    void scan();

    void set_speed(int _speed);
};


#endif //DEVICES_SCANNER_H
