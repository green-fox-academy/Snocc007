//
// Created by Snöcc on 2019-01-29.
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {

public:

    Counter(int number_ = 0);
    void add();
    void add(int x);
    int get();
    void reset();

private:

    int number;
    int startingNumber;




};


#endif //COUNTER_COUNTER_H
