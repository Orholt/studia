#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void merger(char *s3, const char *s1, const char *s2);
void printString(char * string);

int main() {
    char str1[10];
    char str2[10];
    printf("Podaj str1:");
    scanf("%s", str1);
    printf("\n");
    printf("Podaj str2:");
    scanf("%s", str2);
    printf("\n------------------\n");
    int x = (int )strlen(str1);
    int len = (int)strlen(str1) + (int )strlen(str2);
    char str3[len+1];
    merger(str3, str1, str2);
    printString(str3);
    free(str3);
}

void merger(char *s3, const char *s1, const char *s2) {
    int i = 0;
    for (; s1[i] != '\0' ; ++i) {
        s3[i] = s1[i];
    }
    for (int j = 0; s2[j] != '\0' ; ++j) {
        s3[i] = s2[j];
        i++;
    }
    s3[i] = '\0';
}

void printString(char * string) {
    while (*string != 0) {
        printf("%c", *string);
        string++;
    }
    printf("\n");
}