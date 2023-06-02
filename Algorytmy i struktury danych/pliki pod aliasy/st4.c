int pop(struct stack* stack) {
    if (stack->size == 0) {
        return -1; // nie ma nic do wycinki
    }

    return stack->data[--stack->size];
}