#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int * create_array(int k);
void reverse(int * f, int * l);
void print_array(int * arr, int  size);

int main() {
    int t1[5] = {1, 2, 3, 4, 5};
    int t2[5] = {0, 10, 20, 30, 40};
    int t3[5] = {-1, -2, -3, -4, -5};
    int t4[5] = {100, 200, 300, 400, 500};
    int t5[5] = {2, 4, 6, 8, 10};

    reverse(t1, t1+4);
    print_array(t1, 5);

}

int * create_array(int k) {
    return malloc(k * sizeof (double));
}

void reverse(int * f, int * l) {
    int temp;
    while (f != l) {
        temp = *f;
        *f = *l;
        *l = temp;
        f++;
        l--;
    }
}

void print_array(int * arr, int  size) {
    for (int i = 0; i < size; i++) {
        printf("|%d|", arr[i]);
    }
    printf("\n");
}