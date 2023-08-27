#include "stack.h"

struct stack* init(int num) {
    struct stack* new_stack = malloc(sizeof(struct stack));
    new_stack->count = 1;
    new_stack->data = malloc(sizeof(int));
    new_stack->data[0] = num;
    return new_stack;
}

void push(struct stack* stack, int num) {
    int* new_data = malloc(stack->count * sizeof(int));
    copy_data(stack->data, new_data, stack->count);
    new_data[stack->count] = num;
    free(stack->data);
    stack->data = new_data;
    stack->count++;
}

void copy_data(const int* data1, int* data2, int n) {
    for (int i = 0; i < n; i++) {
        data2[i] = data1[i];
    }
}

int pop(struct stack* stack) {
    int ans = 0;
    if (stack->count) {
        ans = stack->data[stack->count - 1];
        int* new_data = malloc((stack->count - 1) * sizeof(int));
        copy_data(stack->data, new_data, stack->count - 1);
        free(stack->data);
        stack->data = new_data;
        stack->count--;
    }
    return ans;
}

void destroy(struct stack* stack) {
    free(stack->data);
    free(stack);
}