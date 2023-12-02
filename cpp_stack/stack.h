#ifndef STACK_H
#define STACK_H
struct stack {
    int val;
    struct stack * next;
    };

void add(struct stack * a,int b);

int read_element_at_index(struct stack * a,int b);

stack * create_first_element(int a);

#endif