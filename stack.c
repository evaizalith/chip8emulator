#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


struct stack* newStack(int capacity) {
    struct stack *ptr = (struct stack*)malloc(sizeof(struct stack));

    ptr->max_size = capacity;
    ptr->top = -1;
    ptr->items = (int*)malloc(sizeof(int) * capacity);

    return ptr; 
}

int size(struct stack *ptr) {
    return ptr->top + 1;
}

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

int isFull(struct stack *ptr) {
    return ptr->top == ptr->max_size - 1;
}

void push(struct stack *ptr, unsigned int element) {
    if(isFull(ptr)) {
        printf("STACK OVERFLOW");
        exit(EXIT_FAILURE);
    }

    printf("Inserting %d\n", element);
    ptr->items[++ptr->top];
}

unsigned int peek(struct stack *ptr) {
    if(isEmpty(ptr)) {
        return 0; 
    }

    return ptr->items[ptr->top];
}

unsigned int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("STACK UNDERFLOW");
        exit(EXIT_FAILURE);
    }

    printf("Popping stack");

    return ptr->items[ptr->top--];
}