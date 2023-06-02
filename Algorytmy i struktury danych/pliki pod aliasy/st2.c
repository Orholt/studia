void init(struct stack* stack, int capacity) {
    stack->data = (int*)malloc(capacity * sizeof(int));
    stack->size = 0;
    stack->capacity = capacity;
}