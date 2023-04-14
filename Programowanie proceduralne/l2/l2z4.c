#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void toUpper(char * string);
void printString(char * string);

int main() {
    char str1[] = "Hello cruel world";
    toUpper(str1);
    printf(str1);
}

void toUpper(char * string) {
    for (int i = 0; string[i] != '\0'; ++i) {
        if (string[i] < 'A') continue;
        int diff = 'a' - 'A';
        if (string[i] > 'Z') {
            string[i] = string[i]-diff;
        }
    }
}

void printString(char * string) {
    while (*string != 0) {
        printf("%c", *string);
        string++;
    }
    printf("\n");
}