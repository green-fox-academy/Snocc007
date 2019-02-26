#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{
    FILE *file_pointer;
    file_pointer = fopen("../my-file.txt", "r");
    if (file_pointer == NULL) {
        printf("Failed to open file...");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), file_pointer) != NULL) {
        printf("%s", line);
    }

    fclose(file_pointer);
    return 0;
}