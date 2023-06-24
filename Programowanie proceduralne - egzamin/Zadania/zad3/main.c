#include <stdio.h>
#include <string.h>

int liczba_podciagow(char * str1, char * str2) {
    int len = strlen(str2);
    int count = 0;
    char * haystack = str1;
    while (*str1 != '\0')
    {
        if (strstr(str1, str2) != NULL) {
        count++;
        str1 += len;
        }
        str1 ++;
    }
    
    return count;
}


int main() {
    printf("%d\n", liczba_podciagow("mamama","mam")); // 1
    printf("%d\n", liczba_podciagow("tata","t")); // 2
}