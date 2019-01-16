#include <iostream>
int main(int argc, char* args[]) {
// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// working hours weekly is 52
    float a = 6;
    float b = 17;
    std::cout << a*b*5 << std::endl;

    std::cout << (a*5)/52 << std::endl;

    return 0;
}