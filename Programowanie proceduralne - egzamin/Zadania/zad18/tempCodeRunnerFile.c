#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node * next;
    struct Node * previous;
} Node;

void add(Node ** node, int value)
{
    // dodaje z lewej
    Node * newNode = malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = *node; // current head aka wskl
    newNode->previous = NULL;

    if (*node != NULL) {
        (*node)->previous = newNode;
    }

    *node = newNode;  // Update the head pointer to the new node
}


int main(int argc, char* argv[]) {
    Node * wskl = malloc(sizeof(Node));
    // Example
    wskl->previous = NULL;
    wskl->next = NULL;
    wskl->value = 10;

    if (wskl == NULL) {
        return 1;
    }

    add(&wskl, 10);

    return 0;
}