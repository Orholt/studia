#include "stdio.h"

/**
 * Funkcja pomocnicza - zamienia miejscami elementy w tablicy
 * @param xp wskaźnik do elementu tablicy
 * @param xp wskaźnik do elementu tablicy
*/
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}