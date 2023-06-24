// Podać wartości, które zostaną wyświetlone na ekranie po wykonaniu poniższego programu. Zachować kolejność.
#include <stdio.h>
#include <stdlib.h>
struct wezel
{
    int dane;
    struct wezel *nastepny;
};
int main(void)
{
    int k;
    struct wezel *p, *q;
    p = NULL;
    for (k = 1; k < 5; ++k)
    {
        q = malloc(sizeof(struct wezel));
        q->dane = 2 * k;
        q->nastepny = p;
        p = q;
    }
    while (q != NULL)
    {
        printf("%d ", q->dane);
        q = q->nastepny;
    }
    return 0;
}


/* 
    8, 6, 4, 2
*/