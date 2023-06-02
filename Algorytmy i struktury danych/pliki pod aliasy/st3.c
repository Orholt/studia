void push(struct stack* stack, int value) {
    if (stack->size == stack->capacity) {
        // za dużo elementów
        return;
    }

    stack->data[stack->size++] = value;
}