#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct wezel {
	int liczba, licznik;
	struct wezel *lewy;
	struct wezel *prawy;
};

struct wezel * wkorzen = NULL;

struct wezel * nowy(int x) {
	struct wezel *p;
	p = malloc(sizeof(struct wezel));
	p->liczba = x;
	p->licznik = 1;
	p->lewy = NULL;
	p->prawy = NULL;
	return p;
}

void dodaj_liczbe(int x) {
	if (wkorzen == NULL) {
		wkorzen = nowy(x);
		return;
	}
	struct wezel *p1, *p2;
	p1 = wkorzen;
	while (p1) {
		p2 = p1;
		if ( x>p1->liczba){
			p1 = p1->prawy;
		}
		else if (x < p1->liczba) {
			p1 = p1->lewy;		
		}
		else {
			++p1->licznik;
			return;
		}
	}
	if (x > p2->liczba)
		p2->prawy = nowy(x);
	else
		p2->lewy = nowy(x);
}

void pisz(struct wezel *p) {
	if (p == NULL) return;
	pisz(p->lewy);
	printf("%d\n", p->liczba);
	pisz(p->prawy);
}

int main() {
	dodaj_liczbe(5);
	dodaj_liczbe(2);
	dodaj_liczbe(3);
	dodaj_liczbe(1);
	dodaj_liczbe(7);
	pisz(wkorzen);
}