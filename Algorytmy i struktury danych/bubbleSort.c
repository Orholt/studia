#include "stdio.h"

/**
 * Zwraca posortowaną tablicę używając algorytmu Bubble Sort
 */
int *bubbleSort(int *array, int size);

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

/**
 * @param array tablica do posortowania
 * @param size rozmiar tablicy
 * @return wskaźnik do posortowanej tablicy
 */
int* bubbleSort(int* array, int size)
{
    /**
     * @param i zmienna iteracyjna 
     * @param j zmienna iteracyjna
    */
    int i, j;
    /**
     * @param swapped zmienna pomocnicza - sprawdza czy było jakieś sortowanie
    */
    int swapped;


    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        // - i w celu optymalizacji
        for (j = 0; j < size - i - 1; j++) {
            /**
             * Jeśli element po lewej jest większy od tego z prawej to zamienia miejscami te elementy
            */
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }

        // Jeśli wewnętrzna pętla nie zamieniła miejscami żadnych elementów, to przerwij
        if (swapped == 0)
            break;
    }

    return array;
}