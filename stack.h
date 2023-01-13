struct stack {
    int max_size;
    int top;
    int *items;
};

int size(struct stack *ptr);
int isEmpty(struct stack *ptr);
int isFull(struct stack *ptr);
void push(struct stack *ptr, unsigned int element);
unsigned int peek(struct stack *ptr);
unsigned int pop(struct stack *ptr);