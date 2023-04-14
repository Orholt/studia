#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int randomN() {
    return rand() % 451 + 50;
}
int randomM() {
    return rand() % 79 + 2;
}
int randomM2() {
    return rand() % 1001 - 500;
}

int main() {
    srand(time(NULL));

    FILE * file = fopen("numbers.txt", "w");

    int n = randomN();
    fprintf(file, "%d\n", n);
    for (int i = 0; i < n; ++i) {
        int m = randomM();
        fprintf(file, "%d\n", m);
        // m integers
        for (int j = 0; j < m; ++j) {
            fprintf(file, "%d ", randomM2());
        }
    }

    fclose(file);
}