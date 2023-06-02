#include "stdio.h"

/**
 * Liniowo sprawdza czy w podanej tablicy występuje konkretna wartość
 * @return 1 jeśli jest, 0 jeśli nie ma
*/
int linearSearch(int * array, int size, int needle);

int linearSearch(int * array, int size, int needle) {

    int i = 0;

    for (i = 0; i < size; i++) {
        if (array[i] == needle) {
            return 1;
        }
    }

    return 0;
}