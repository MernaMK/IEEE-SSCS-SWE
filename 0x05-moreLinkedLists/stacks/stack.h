#ifndef stack_H
#define stack_H

#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
typedef struct Node Node;
struct Node
 {
     int type;
     Node *next;
 };

typedef struct 
{
    int size;
    Node *top;
}Stack;

void push(Stack *st,int num);
int pop(Stack *st);
bool isEmpty(Stack *st);
int size(Stack *st);
int peek(Stack *st);
void freeStack(Stack *st);

#endif
