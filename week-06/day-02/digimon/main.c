#include <stdio.h>
#include <memory.h>

#define MAX health 100

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
enum digivolution_level
{

    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA

};

typedef struct
{
    unsigned char name[128];
    unsigned int age;
    unsigned int health : 7;
    char name_of_tamer[256];
    enum digivolution_level level;

} digimon_t;

int get_minimum_health_index(digimon_t *array, int array_length);

int get_same_digivolution_count(digimon_t *array, int array_length, enum digivolution_level lvl);

int get_same_tamer_count(digimon_t *array, int array_length, char *tamer);

double get_average_health(digimon_t *array, int array_length, char *tamer);

int main()
{
    digimon_t digimons[4];

    digimon_t Borochiua;
    digimon_t Adachu;
    digimon_t Gyurichua;
    digimon_t Snoccuyu;

    Borochiua.health = 50;
    Adachu.health = 70;
    Gyurichua.health = 65;
    Snoccuyu.health = 50;

    Borochiua.level = CHAMPION;
    Adachu.level = IN_TRAINING;
    Gyurichua.level = ULTIMATE;
    Snoccuyu.level = MEGA;

    strcpy(Borochiua.name_of_tamer, "Michele");
    strcpy(Adachu.name_of_tamer, "Michele");
    strcpy(Gyurichua.name_of_tamer, "Manu");
    strcpy(Snoccuyu.name_of_tamer, "Sziszilvi");

    digimons[0] = Borochiua;
    digimons[1] = Adachu;
    digimons[2] = Gyurichua;
    digimons[3] = Snoccuyu;

    printf("%d, %d, %d, %.2f,", get_minimum_health_index(digimons, 4), get_same_digivolution_count(digimons, 4, MEGA),
           get_same_tamer_count(digimons, 4, "Michele"), get_average_health(digimons, 4, "Michele"));


    return 0;
}

int get_minimum_health_index(digimon_t *array, int array_length)
{
    int minimumHealth = array[0].health;
    int index = 0;
    for (int i = 0; i < array_length; i++) {
        if (minimumHealth < array[i].health) {
            index = i;
        }

    }
    return index;

}

int get_same_digivolution_count(digimon_t *array, int array_length, enum digivolution_level lvl)
{

    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (lvl == array[i].level) {
            count++;
        }

    }
    return count;
}

int get_same_tamer_count(digimon_t *array, int array_length, char *tamer)
{

    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (strcmp(tamer, array[i].name_of_tamer) == 0) {
            count++;
        }

    }
    return count;
}

double get_average_health(digimon_t *array, int array_length, char *tamer)
{

    double average_health = 0;
    int count = 0;
    for (int i = 0; i < array_length; i++) {
        if (strcmp(tamer, array[i].name_of_tamer) == 0) {
            count++;
            average_health += array[i].health;
        }

    }
    return average_health / count;
}