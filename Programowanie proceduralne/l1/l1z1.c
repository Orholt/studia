#include <stdio.h>

/// Zwraca informacje o liczbie elementów posiadających taką samą wartość jak 3 argument i zawartch między elementami wskazywanymi przez pierwsze 2 argumenty włączając w to elem <1; 2)
int licz(double *p1, double *p2, double x);

int main(void){
    double t[]={8.0, 2.0, 1.0, 6.0, 2.0, 7.0, 5.0, 2.0, 9.0};
    int n= licz(t+1, t+8, 2.0);
    printf("%d\n", n);
    return 0;
}

int licz(double *p1, double *p2, double x) {
    int n = 0;
    while (p1 != p2)  {
        if (*p1 == x) n++;
        p1++;
    }
    return n;
}