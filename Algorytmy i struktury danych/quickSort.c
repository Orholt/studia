#include "stdio.h"

/**
 * Zwraca posortowaną tablicę używając algorytmu Quick Sort
 */
int *quickSort(int *array, int low, int high);

/**
 * Funkcja znajdująca pozycję pivota
*/
int partition(int array[], int low, int high) {
  
  /**
   * Element najbardziej z prawej
  */
  int pivot = array[high];
  
  /**
   * @param i wskaźnik do większego elementu
  */
  int i = (low - 1);

  /**
   * Przechodzimy przez tablicę od low do high-1 za pomocą zmiennej j.
  */
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      /**
       * Jeśli bieżący element array[j] jest mniejszy lub równy od elementu osiowego, zostaje zamieniony miejscami z elementem o indeksie i+1
      */
      i++;
      
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // Zwracamy pivot
  return (i + 1);
}

/**
 * @param array tablica do posortowania
 * @param low indeks 1 elementu ( zazwyczaj 0 )
 * @param high indeks ostatniego elementu ( zazwyczaj rozmiar - 1 )
*/
int* quickSort(int* array, int low, int high) {
  
  /**
   * Warunek sprawdza czy są co najmniej 2 elementy do posortowania
  */
  if (low < high) {
    /**
     * @param pi pivot, aka indeks podziału dzielący tablicę na 2 części
    */
    int pi = partition(array, low, high);
    /**
     * Sortowanie lewej podtablicy
    */
    quickSort(array, low, pi - 1);
    /**
     * Sortowanie prawej podtablicy
    */
    quickSort(array, pi + 1, high);
  }
  
  return array;
}
