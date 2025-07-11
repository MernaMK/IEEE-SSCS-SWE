#include "./stack.h"

int main() {
    Stack *st = (Stack *)malloc(sizeof(Stack));

    st->size = 0;
    st->top = NULL;
    printf("before pushing\n\n");
    printf("Empty: %d\n\n", isEmpty(st));  
    printf("size: %d\n", st->size); 
    printf("size: %d\n", size(st)); 

    push(st,10);
    push(st,20);
    push(st,30);

    printf("\nafter pushing\n\n");

    printf("Empty: %d\n", isEmpty(st));  

    printf("size: %d\n", st->size);  
    printf("size: %d\n", size(st));  

    printf("Popped: %d\n", pop(st));  
    printf("Popped: %d\n", pop(st));  
    printf("size: %d\n", st->size);  
    printf("size: %d\n", size(st));  
    printf("peek: %d\n", peek(st));  

   
    freeStack(st);

    return 0;
}
