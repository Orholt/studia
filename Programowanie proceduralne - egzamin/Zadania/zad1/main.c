#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int size) {

    int ** alloc;

    alloc = (int**) malloc(sizeof(int*) * size);

    for (int row = 0; row < size; row++)
    {
        alloc[row] = (int*) malloc(sizeof(int) * size-row);
    }
    
    return alloc;
}

int main() {
    int ** arr = alokuj(4);
    free(arr);
}