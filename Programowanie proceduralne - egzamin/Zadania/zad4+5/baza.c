/*
Na stronie nr 2 znajduje się fragment programu (baza.c), w którym brakuje jednak trzech definicji i prototypów funkcji. Napisz odpowiedni prototyp funkcji inicjalizacja_OSOBA(), która dla podanych argumentów (zob. wywołanie funkcji w programie) inicjalizuje strukturę odpowiednimi danymi. Wykorzystaj funkcję malloc(), aby przydzielić odpowiednią ilość miejsca w strukturze na przechowanie łańcuchów oznaczających imię, nazwisko i miejscowość (przydzielone bloki pamięci powinny być dokładnie takiej wielkości jak podane dane przez użytkownika + jedno miejsce na znak pusty ‘\0’).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
#define MAX 1
typedef struct osoba
{
    char *imie;
    char *nazwisko;
    char *miejscowosc;
    int wiek;
} OSOBA;

void inicjalizacja_OSOBA( OSOBA * osoba , char * tab_imie, char * tab_nazwisko, char * tab_miejscowosc, int age);
void dealokacja_OSOBA( OSOBA * osoba );
void wyswietl(OSOBA * osoba);

int main(void)
{
    OSOBA dane[MAX];
    char tab_imie[N + 1];
    char tab_nazwisko[N + 1];
    char tab_miejscowosc[N + 1];
    int i = 0, age, k;
    while (i < MAX)
    {
        printf("Podaj imie: ");
        gets(tab_imie);
        printf("Podaj nazwisko: ");
        gets(tab_nazwisko);
        printf("Podaj miejscowosc: ");
        gets(tab_miejscowosc);
        printf("Podaj wiek: ");
        scanf("%d", &age);
        while (getchar() != '\n')
            ;
        inicjalizacja_OSOBA(&dane[i], tab_imie, tab_nazwisko, tab_miejscowosc, age);
        i++;
    }
    printf("Podaj, ktory rekord tablicy dane chcesz wyswietlic.\n");
    printf("Wyjscie poza indeks tablicy lub wpisanie znaku nie bedacego liczba konczy wypisywanie!");
    while (scanf("%d", &k) == 1 && k >= 0 && k < MAX)
    {
        printf("Rekord %d\n", k);
        printf("--------------------------\n");
        wyswietl(&dane[k]);
        printf("--------------------------\n");
        while (getchar() != '\n')
            ;
        printf("Podaj ktory rekord tablicy dane chcesz wyswietlic.\n");
        printf("Wyjscie poza idkeks tablicy lub wpisanie znku nie bedacego liczba konczy wypisywanie!\n");
    }
    for (int i = 0; i < MAX; i++)
        dealokacja_OSOBA(&dane[k]);
    printf("KONIEC!");
    return 0;
}

void inicjalizacja_OSOBA(OSOBA * osoba , char * tab_imie, char * tab_nazwisko, char * tab_miejscowosc, int age) {
    osoba->imie = malloc((strlen(tab_imie) + 1) * sizeof(char));
    osoba->nazwisko = malloc((strlen(tab_nazwisko) + 1) * sizeof(char));
    osoba->miejscowosc = malloc((strlen(tab_miejscowosc) + 1) * sizeof(char));
    osoba->wiek = age;
}

void dealokacja_OSOBA( OSOBA * osoba ) {
    free(osoba->imie);
    free(osoba->nazwisko);
    free(osoba->miejscowosc);
}

void wyswietl(OSOBA * osoba) {
    printf("-------- OSOBA --------\n");
    printf("| Imie: %s |\n", osoba->imie);
    printf("| Nazwisko: %s |\n", osoba->nazwisko);
    printf("| Miejscowosc: %s |\n", osoba->miejscowosc);
    printf("-------------------------\n");
}