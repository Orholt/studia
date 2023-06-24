#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 26

char **alokuj_tab_str(FILE *file) {
    char **arr = malloc(sizeof(char *) * ROWS);
    char row[100]; // Przyjmujemy maksymalną długość wiersza jako 100 (można dostosować)
    int i = 0;
    while (fgets(row, sizeof(row), file) != NULL) {
        int length = strlen(row);
        if (length > 0 && row[length - 1] == '\n') {
            row[length - 1] = '\0'; // Usunięcie znaku nowej linii
            length--;
        }
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
    fclose(file); // Zamknięcie pliku

    for (int i = 0; i < ROWS; i++) {
        puts(arr[i]);
        free(arr[i]);
    }
    free(arr);

    return 0;
}
