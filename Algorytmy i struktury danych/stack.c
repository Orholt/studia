#include <stdio.h>
#include <stdlib.h>

struct stack {
    int* data;   
    int size; 
    int capacity; 
};

void init(struct stack* stack, int capacity) {
    stack->data = (int*)malloc(capacity * sizeof(int));
    stack->size = 0;
    stack->capacity = capacity;
}

void push(struct stack* stack, int value) {
    if (stack->size == stack->capacity) {
        // za dużo elementów
        return;
    }

    stack->data[stack->size++] = value;
}

int pop(struct stack* stack) {
    if (stack->size == 0) {
        return -1; // nie ma nic do wycinki
    }

    return stack->data[--stack->size];
}