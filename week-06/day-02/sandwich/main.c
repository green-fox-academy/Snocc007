#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

struct Sandwich
{
    char *name;
    float price;
    float weight;
};

float priceOfOrder(struct Sandwich sandwich, int piece);


int main()
{
    struct Sandwich hamburger;
    hamburger.price = 3.75;
    printf("The price of order is: %.2f $.\n", priceOfOrder(hamburger, 3));
    return 0;
}

float priceOfOrder(struct Sandwich sandwich, int piece)
{
    float orderPrice;
    orderPrice = sandwich.price * piece;
    return orderPrice;
}
