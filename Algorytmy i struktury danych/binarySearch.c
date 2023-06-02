#include "stdio.h"

/**
 * Binarnie sprawdza czy w podanej tablicy występuje konkretna wartość
 * @return 1 jeśli jest, 0 jeśli nie ma
*/
int binarySearch(int * array, int l, int r, int needle);

int binarySearch(int * array, int l, int r, int needle) {
    
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (array[m] == needle)
            return m;

        if (array[m] < needle)
            l = m + 1;

        else
            r = m - 1;
    }

    return 0;
}


