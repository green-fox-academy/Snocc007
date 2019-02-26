#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct
{
    float x;
    float y;
} point_t;

point_t create_point(float _x, float _y);

float distance(point_t _p1, point_t _p2);


int main()
{
    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, 5.5);
    float dist = distance(p1, p2);
    printf("The distance of the 2 points is: %.3f\n", dist);

    return 0;
}

point_t create_point(float _x, float _y)
{
    point_t p;

    p.x = _x;
    p.y = _y;

    return p;
}

float distance(point_t _p1, point_t _p2)
{
    float distance;
    float c2;

    c2 = (_p1.x - _p2.x) * (_p1.x - _p2.x) + (_p1.y - _p2.y) * (_p1.y - _p2.y);
    distance = sqrtf(c2);

    return distance;


}