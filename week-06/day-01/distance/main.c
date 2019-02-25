#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance(char array[], const char c);

int main ()
{
    char str[] = "This is a sample string";
    char c = 's';
   // char *first, *last;
   // first = strchr(str, 's');
   // last = strrchr(str, 's');

    printf("%d", distance(str, c));

    return 0;
}

int distance(char array[], const char c){
    int distance;
    distance = (strrchr(array, c) - strchr(array, c));

    return distance;
}