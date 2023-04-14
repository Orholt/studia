#include "stdio.h"
double * znajdz_max(double tab[], int rozmiar);

int main() {
    double tablica[] = { 1.2, 3.8, 7.9, 1.3, 2.1, 10, 4.1, 0.5 };
    int size = sizeof(tablica)/sizeof(tablica[0]);
    printf("%g", *znajdz_max(tablica, size));
}

double * znajdz_max(double tab[], int rozmiar) {
    double *max = tab;
    double *tabPtr = tab;
    for (int i = 0; i < rozmiar; i++) {
     if (*max < *tabPtr) max = tabPtr;
     tabPtr+=1;
    }
    return max;
}