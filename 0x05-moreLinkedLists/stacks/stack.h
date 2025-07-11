#ifndef stack_H
#define stack_H

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
