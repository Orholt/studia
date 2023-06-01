#include "stdio.h"

/**
 * Zwraca posortowaną tablicę używając algorytmu Insert Sort
 */
int *insertSort(int *array, int size);

/**
 * @param array tablica do posortowania
 * @param size rozmiar tablicy
*/
int *insertSort(int *array, int size)
{
    /**
     * @param i służy do iteracji przez tablicę
     * @param key przechowuje wartość elementu, który aktualnie porównujemy
     * @param j określa indeks poprzedzający element, z którym porównujemy
    */
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;

        /**
         * Jeśli poprzedni element będzie większy od następnego)
         * Do momentu aż 
        */ 
        while (j >= 0 && array[j] > key)
        {
            /**
             * Podczas porównywania, do momentu aż poprzednie elementy będą większe,
             * przenosimy elementy z tablicy na prawo
            */
            array[j + 1] = array[j];
            j = j - 1;
        }

        /**
         * Wstawiamy na "właściwe miejsce" mniejszy element
        */
        array[j + 1] = key;
    }

    return array;
}