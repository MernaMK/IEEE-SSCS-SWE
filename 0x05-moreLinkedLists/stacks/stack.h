#ifndef stack_H
#define stack_H
#include "stdio.h"
 typedef struct
 {
     int type;
     struct Node *next;
 }Node;

struct Stack
{
    int size;
    Node *top;
};
#endif
