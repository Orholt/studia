#include "stdio.h"
int wiekszeOdK(int tab[], int size, int k);

int main() {
    int tablica[] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("%d", wiekszeOdK(tablica, 10, 5));
}

int wiekszeOdK(int tab[], int size, int k) {
    int n = 0;
    int * tabPtr = tab;
    for (int i = 0; i < size; i++ ){
        if (*tabPtr > k) n++;
        tabPtr++;
    }
    return n;
}