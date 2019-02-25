#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer Mac;
    Mac.bits = 64;
    Mac.ram_size_GB = 8;
    Mac.cpu_speed_GHz = 2.87;

    Notebook Eee;
    Eee.bits = 32;
    Eee.ram_size_GB = 4;
    Eee.cpu_speed_GHz = 2.31;

    printf("The Mac has a %d bit OS with %d GB RAM and %.2f GHz processor.\n",
           Mac.bits, Mac.ram_size_GB, Mac.cpu_speed_GHz);

    printf("The Eee netbook has a %d bit OS with %d GB RAM and %.2f GHz processor.\n",
           Eee.bits, Eee.ram_size_GB, Eee.cpu_speed_GHz);
    return 0;
}
