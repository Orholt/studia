#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 26
#define MAX_LENGTH 100

char **alokuj_tab_str(FILE *file) {
    char **arr = malloc(sizeof(char *) * ROWS);
    char row[MAX_LENGTH];
    int i = 0;
    while (fscanf(file, "%s", row) != EOF) {
        int length = strlen(row);
        arr[i] = malloc((length + 1) * sizeof(char));
        strcpy(arr[i], row);
        i++;
    }
    return arr;
}

int main() {
    FILE *file = fopen("lec.txt", "r");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    char **arr = alokuj_tab_str(file);
    fclose(file);

    for (int i = 0; i < ROWS; i++) {
        puts(arr[i]);
        free(arr[i]);
    }
    free(arr);

    return 0;
}
