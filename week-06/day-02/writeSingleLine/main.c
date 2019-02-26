#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{
    FILE *file_pointer;
    file_pointer = fopen("../my-file.txt", "w");
    if (file_pointer == NULL) {
        return 0;
    }

    char name[128];
    strcpy(name, "Joe Black");

    fprintf(file_pointer, name);

    fclose(file_pointer);

    return 0;
}