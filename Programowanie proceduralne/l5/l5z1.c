#include "stdio.h"
#include "stdlib.h"

struct struktura {
    int num;
    int ** array;
};

int main() {
    // p1
    struct struktura ** p1; // tablica wskaźników
    p1 = malloc(sizeof (struct struktura *) * 3);
    p1[1] = NULL;


    struct struktura struktura1;
    p1[0] = &struktura1;
    p1[0]->num = 7;
    p1[0]->array = malloc(2 * sizeof(int *));
    p1[0]->array[0] = NULL;
    p1[0]->array[1] = NULL;

    struct struktura struktura2;
    p1[2] = &struktura2;
    p1[2]->num = 4;
    p1[2]->array = malloc(3 * sizeof (int *));
    p1[2]->array[0] = NULL;


    int ** p2 = p1[2]->array;
    p2[1] = malloc(sizeof (int) * 4);
    p2[1][0] = 1;
    p2[1][1] = 2;
    p2[1][2] = 3;
    p2[1][3] = 4;

    p2[2] = malloc(sizeof (int) * 3);
    p2[2][0] = 5;
    p2[2][1] = 6;
    p2[2][2] = 7;


    free(p1);
    free(p2);
}
