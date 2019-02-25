#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    fgets(string, sizeof(string), stdin);
    for (char *word = strtok(string, " "); word != NULL; word = strtok(NULL, " ")) {
        puts(word);
    }

    return(0);
}