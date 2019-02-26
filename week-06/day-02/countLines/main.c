#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int main()
{
    FILE *file_pointer;
    file_pointer = fopen("../my-file.txt", "r");
    if (file_pointer == NULL) {
        return 0;
    }

    char line[256];
    int count = 0;
    while (fgets(line, sizeof(line), file_pointer) != NULL) {
        count++;
    }

    fclose(file_pointer);


    return 0;
}