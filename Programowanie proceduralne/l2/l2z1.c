#include "stdio.h"

char * findFirst(char * string, char needle) {
    while (*string != 0) {
        if (*string == needle) return string;
        string++;
    }
    return NULL;
}

int main() {
    char * string = "Hello world of C";
    char * ptr = findFirst(string, 'C');
    printf("%x", ptr);
}