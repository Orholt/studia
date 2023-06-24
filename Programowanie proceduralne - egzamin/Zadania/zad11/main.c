// Podać wartości, które zostaną wyświetlone na ekranie po wykonaniu poniższego programu. Zachować kolejność.
#include <stdio.h>

void f(int x)
{
    if (x < 3)
        f(x + 1);
    printf("%d\n", x);
    if (x < 5)
        f(x + 2);
}

int main(void)
{
    f(2);
    return 0;
    /* f(3): '3', f(5): '5'  f(2): '2' f(4): '4', f(6): '6' */
}