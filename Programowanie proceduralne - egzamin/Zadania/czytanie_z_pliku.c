#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100 // Define the maximum length of each line

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH]; // Buffer to store each line
    char *lines[100]; // Array of pointers to store each line

    file = fopen("example.txt", "r"); // Open the file in read mode

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    int lineCount = 0; // Counter for the number of lines read

    // * WITH FSCANF while(fscanf(fp,"%s",item) == 1)   **//

    // Read lines until the end of the file is reached
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        lines[lineCount] = malloc(strlen(line) + 1); // Allocate memory for the line
        strcpy(lines[lineCount], line); // Copy the line into the allocated memory
        lineCount++;
    }

    fclose(file); // Close the file

    // Print the lines
    for (int i = 0; i < lineCount; i++) {
        printf("Line %d: %s", i + 1, lines[i]);
        free(lines[i]); // Free the memory allocated for each line
    }

    return 0;
}
