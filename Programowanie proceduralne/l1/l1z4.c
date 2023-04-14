#include "stdio.h"
#include "stdlib.h"
#include "time.h"

double * create_array(int k);
void merge_array(double * t1, double * t2, double * t3, int n, int m);
void print_array(double * arr, int  size);
void fill_array(double  * arr, int size);

int main() {
    int n, m;
    srand(time(0));
    printf("Podaj n:\n");
    scanf("%d", &n);
    printf("Podaj m:\n");
    scanf("%d", &m);
    printf("------------------------\n");
    printf("| n = %d, m = %d |\n", n, m);
    printf("------------------------\n");

    double *t1 = create_array(n);
    fill_array(t1, n);
    print_array(t1, n);

    double *t2 = create_array(m);
    fill_array(t2, m);
    print_array(t2, m);
    printf("------------t3------------\n");
    double *t3 = create_array(n+m);
    merge_array(t1, t2, t3, n, m);
    print_array(t3, n+m);

    free(t1);
    free(t2);
    free(t3);
}

double * create_array(int k) {
    return malloc(k * sizeof (double));
}

void merge_array(double * t1, double * t2, double * t3, int n, int m) {
    int total = n+m;
    for (int i = 0; i < n; i++) {
        t3[i] = t1[i];
    }
    for (int i = 0; i < m; i++) {
        t3[i+n] = t2[i];
    }
}

void fill_array(double  * arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (double)(rand() % 10);
    }
}

void print_array(double * arr, int  size) {
    for (int i = 0; i < size; i++) {
        printf("|%g|", arr[i]);
    }
    printf("\n");
}