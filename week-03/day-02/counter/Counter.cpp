//
// Created by Snöcc on 2019-01-29.
//

#include "Counter.h"

Counter::Counter(int number_) {

    number = number_;
    startingNumber = number_;



}
void Counter::add(int x){

    number = number + x;



}

void Counter::add(){

    number++;


}
int Counter::get() {

    return number;

}

void Counter::reset(){

    number = startingNumber;

}