#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    FILE *intput_file_pointer;
    FILE *output_file_pointer;
    intput_file_pointer = fopen("input.txt", "r");
    output_file_pointer = fopen("output.txt", "w");

    if (intput_file_pointer == NULL) {
        printf("Couldn't open input file...");
    }

    char line[1251];
    int val;
    int count = 0;
    while (fgets(line, sizeof(line), intput_file_pointer) != NULL) {
    }

    for (char *p = strtok(line, " "); p != NULL; p = strtok(NULL, " ")) {
        count++;
        val = atoi(p);
        int decimal_val = 0, base = 1, rem;
        while (val > 0)
        {
            rem = val % 10;
            decimal_val = decimal_val + rem * base;
            val = val / 10 ;
            base = base * 2;
        }

        fprintf(output_file_pointer, "%c", decimal_val);

    }
   // printf("%d", count);
    fclose(intput_file_pointer);
    fclose(output_file_pointer);
    return 0;
}
