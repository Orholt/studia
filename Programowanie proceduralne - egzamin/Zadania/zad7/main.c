/*
Zaprojektuj funkcję , która wypełnia i wyświetla tablicę dwuwymiarową o rozmiarze W x K - uzupełnij podany program o stosowny prototyp i definicję funkcji. Tablica powinna być wypełniona losowymi małymi i wielkimi literami alfabetu łacińskiego. Instrukcje wyświetlania należy tak zapisać, aby każdy wiersz tablicy oddzielony był znakiem nowej linii, a każda litera w wierszu spacją.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define W 8
#define K 12

void uzupelnij_wyswietl(char tablica[W][K]);

int main(void)
{
    srand(time(NULL));
    char tablica[W][K];
    uzupelnij_wyswietl(tablica);
    return 0;
}

void uzupelnij_wyswietl(char tablica[W][K]) {
    
    for (int i = 0; i < W; i++)
    {
        for (int k = 0; k < K; k++)
        {
            char randomSmallletter = 'a' + rand() % ('z' - 'a');
            char randomBigletter = 'A' + rand() % ('Z' - 'A');
            char randomletter;
            if (rand() % 2 == 1) randomletter = randomBigletter;
            if (rand() % 2 == 0) randomletter = randomSmallletter;
            
            tablica[i][k] = randomletter;
            printf("|%c|", tablica[i][k]);
        }
        printf("\n");
    }
    
}