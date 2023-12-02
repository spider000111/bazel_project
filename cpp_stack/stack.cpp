#include "stack.h"

#include <stdio.h>
#include <stdlib.h>


void add(struct stack * a,int b){

    while(a->next!=nullptr){
        a = a->next;
    }
    a->next = create_first_element(b);

}

int read_element_at_index(struct stack * a,int b){

    for(int i=0;i<b;i++){
        a = a->next;
        if(a->next==nullptr){
            break;
        }
    }
    return a->val;
}

stack * create_first_element(int a){

    struct  stack *ptr = (struct  stack *)malloc(sizeof(struct stack));

    ptr->val  = a;
    ptr->next = nullptr;

    return ptr;
}