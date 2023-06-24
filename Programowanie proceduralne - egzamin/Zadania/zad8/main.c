#include <stdio.h>
#include <ctype.h>

int moja_atoi(const char *s) {
    while (isspace(*s)) {
        s++;  // Pominięcie białych znaków na początku łańcucha
    }

    int sign = 1;  // Domyślny znak dodatni

    if (*s == '-') {
        sign = -1;
        s++;  // Pominięcie znaku minus
    }

    int result = 0;

    while (isdigit(*s)) {
        result = result * 10 + (*s - '0');
        s++;  // Przesunięcie wskaźnika na kolejny znak
    }

    return sign * result;
}

int main() {
    printf("%d\n", moja_atoi("123"));           // 123
    printf("%d\n", moja_atoi("-223"));          // -223
    printf("%d\n", moja_atoi(" 23"));           // 23
    printf("%d\n", moja_atoi("- 223"));         // 0
    printf("%d\n", moja_atoi("a223"));          // 0
    printf("%d\n", moja_atoi("2ala"));          // 2
    printf("%d\n", moja_atoi("-5.4"));          // -5
    printf("%d\n", moja_atoi(" -5.4ola"));      // -5

    return 0;
}
