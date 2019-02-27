#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int* array_even = NULL;
    array_even = (int*)calloc(10, sizeof(int));
    int* array_odd = NULL;
    array_odd = (int*)calloc(10, sizeof(int));
    int* array_merged = NULL;
    array_merged = (int*)calloc(20, sizeof(int));


    for (int i = 0; i < 10; i++) {
        array_even[i] = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", array_even[i]);

    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        array_odd[i] = i * 2 + 1;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", array_odd[i]);
    }

    printf("\n");
    int i;
    int j;
    for (i = 0, j = 0 ; i < 10, j < 10; i+=2, j++) {
        array_merged[i] = array_even[j];
        array_merged[i+1] = array_odd[j];
    }
    for (int i = 0; i < 20; i++) {
        printf("%d ", array_merged[i]);
    }
    return 0;
}