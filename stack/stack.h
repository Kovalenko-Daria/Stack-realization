#ifndef STACK_H

#define STACK_H

#include <stdlib.h>

struct stack {
    int count;
    int* data;
};

struct stack* init(int num);

void push(struct stack* stack, int num);
void copy_data(const int* data1, int* data2, int n);

int pop(struct stack* stack);
void destroy(struct stack* stack);

#endif