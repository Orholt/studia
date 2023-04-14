#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
    srand(time(NULL));
    FILE * file = fopen("numbers.txt", "w");
    for (int i = 0; i < 500; i++) {
        int num = rand() % 1000 + 1;
        fprintf(file, "%d\n", num);
    }
    fclose(file);
}