#include <stdio.h>

int isOldEnough(int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary
    int ageOfUser;
    printf("How old are you?\n");
    scanf("%d", &ageOfUser);

    if(isOldEnough(ageOfUser)) {
        printf("Let's get wasted!\n");
    } else {
        printf("Not now, baby...\n");
    }

    return 0;
}

int isOldEnough(int age)
{
    return age >=18;

}