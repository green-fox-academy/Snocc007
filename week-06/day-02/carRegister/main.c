#include <string.h>
#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

enum type_of_the_transmission
{
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH

};

typedef struct
{
    char name[256];
    float price;
    int year;
    enum type_of_the_transmission type;

} car_t;

int get_older_cars_than(car_t *array, int array_length, int age);

int get_transmission_count(car_t *array, int array_length, enum type_of_the_transmission trnsm);

int main()
{
    car_t Ford;
    car_t Toyota;
    car_t Mercedes;

    Ford.type = MANUAL;
    Ford.price = 10000.10;
    Ford.year = 2016;

    Toyota.type = CVT;
    Toyota.price = 12134.34;
    Toyota.year = 2017;

    Mercedes.type = DUAL_CLUTCH;
    Mercedes.price = 13567.98;
    Mercedes.year = 2016;

    car_t  car[20];

    car[0] = Ford;
    car[1] = Toyota;
    car[2] = Mercedes;

    printf("The number of cars which younger than 3 years is: %d\n"
           "The number of cars which has MANUAL transmission is: %d\n",
           get_older_cars_than(car, 3, 2),
           get_transmission_count(car, 3, MANUAL));

    return 0;
}

int get_older_cars_than(car_t *array, int array_length, int age)
{

    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (2019 - array[i].year > age) {
            count++;
        }
    }
    return count;
}

int get_transmission_count(car_t *array, int array_length, enum type_of_the_transmission trnsm)
{

    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (array[i].type == trnsm) {
            count++;
        }
    }
    return count;
}
