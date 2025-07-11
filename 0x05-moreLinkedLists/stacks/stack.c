#include "stack.h"
void push(Stack *st,int num) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->type = num;
    newNode->next = st->top;
    st->top = newNode;
    st->size++;
}

int pop(Stack *st) {
    if (st->size == 0) {
        printf("Stack is empty!\n");
        return -1;
    }
    Node *temp = st->top;
    int data = temp->type;
    st->top = temp->next;
    free(temp);
    temp=NULL;
    st->size--;
    return data;
}

bool isEmpty(Stack *st)
{
    if(st->top==NULL)return true;
    else return false;
}

int size(Stack *st)
{
    int n=0;
    Node *temp=st->top;
    while(temp!=NULL)
    {
        n++;
        temp= temp->next;
    }
    return n;
}

int peek(Stack *st)
{
    Node*temp=st->top;
    return temp->type;
}
void freeStack(Stack *st) {
    while (st->top != NULL) {
        Node *temp = st->top;
        st->top = st->top->next;
        free(temp);
        temp=NULL;
    }
    free(st);
    st = NULL;
}
