#include <stdio.h>
#include <stdlib.h>

struct list {
    struct list * l;
    int val;
    struct list * p;
};

void add(struct list * list, int val) {
    struct list lista;
    lista.l = NULL;
    lista.p = list;
    lista.val = val;

    list->l = lista.p;
}

int main() {
    struct list * listptr;
    struct list lista;
    lista.l = NULL;
    lista.p = NULL;

    struct list * wlst;

    add(listptr, 8);
}