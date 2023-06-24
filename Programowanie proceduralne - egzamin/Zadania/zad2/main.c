#include <stdio.h>
#include <stdlib.h>

void wypelnij_wyswietl(int ** arr, int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows-i; k++)
        {
            arr[i][k] = k+1;
            printf("[%d]", k+1);
        }
        printf("\n");
    }
    
}

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
    int rows = 4;
    int ** arr = alokuj(rows);
    wypelnij_wyswietl(arr, rows);
    free(arr);
}
