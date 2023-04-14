#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
    srand(time(NULL));
    FILE * file1 = fopen("numbers.txt", "r");
    FILE * file2 = fopen("numbers2.txt", "w");
    int num;
    while (fscanf(file1, "%d", &num) == 1) {
        printf("%d\n", num);
        if (num % 3 == 0) {
            fprintf(file2, "%d\n", num);
        }
    }
    fclose(file1);
    fclose(file2);
}