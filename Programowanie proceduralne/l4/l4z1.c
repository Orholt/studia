#include "stdio.h"
#include "stdlib.h"

int main() {
    char str[] = "Programowanie Proceduralne 2022";
    FILE * file = fopen("l4z1.txt", "w");
    for (int i = 0; str[i] != '\0' ; ++i) {
        fprintf(file, "%c", str[i]);
    }
    fclose(file);
}