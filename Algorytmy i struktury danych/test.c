#include "stdio.h"

// Import funkcji implmenetująch sortowanie
#include "insertSort.c"
#include "swap.c"
#include "bubbleSort.c"
#include "quickSort.c"
#include "mergeSort.c"

// Wartości dla testów nie usuwać /////////////////////////////////////////////////////////////////////
int size = 20;                                                                                ///
int unsortedArray[] = {1, 8, 12, 5, 10, 19, 4, 7, 11, 14, 3, 20, 16, 2, 9, 6, 13, 1, 15, 18}; ///
int sortedArray[] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20};   ///
int testCount = 4;                                                                            ///
///////////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * Funkcja do porównywania tablic służąca za narzędzie do testów
 */
int compareArrays(int a[])
{
    int ii;
    for (ii = 0; ii < size; ii++)
    {
        if (a[ii] != sortedArray[ii])
            return 0;
    }
    return 1;
}

/**
 * Głównym celem tego kodu jest sprawdzenie poprawności wszystkich algorytmów.
 * @return Zwraca wynik testów sortowania
 */
int main()
{
    int testPassed = 0;
    int* res;

    // Insert Sort test
    res = insertSort(unsortedArray, size);
    testPassed += compareArrays(res);

    // Bubble Sort test
    res = bubbleSort(unsortedArray, size);
    testPassed += compareArrays(res);

    // // Quick Sort test
    res = quickSort(unsortedArray, 0, size-1);
    testPassed += compareArrays(res);

    // // Merge Sort test
    // res = mergeSort(unsortedArray, size);
    // printf("%d", compareArrays(res));

    printf("Test passed: %d / %d", testPassed, testCount);

}
