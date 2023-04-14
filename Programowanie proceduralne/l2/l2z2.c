#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void printString(char * string);
char * replaceSpace(char * result, const char * proto);

int main() {
    char * string2 = "A fast fox jumped over lazy Dog";
    char string1[strlen(string2)+1];

    replaceSpace(string1, string2);

    printString(string2);
    printString(string1);

    free(string1);
}

void printString(char * string) {
    while (*string != 0) {
        printf("%c", *string);
        string++;
    }
    printf("\n");
}

char * replaceSpace(char * result, const char * proto) {
    int i;
    for (i = 0; proto[i] != '\0'; i++) {
        if (proto[i] == ' ') {
            result[i] = '_';
        } else {
            result[i] = proto[i];
        }
    }
    result[i] = '\0';
    return result;
}