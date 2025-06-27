#include <stdio.h>
#include <stdlib.h>

int a=1;

void main()
{
int b=2;

int *c= (int*)malloc(sizeof(int));
*c=3;

char *d="welcome";

printf("\n( address : memory segment )-> value");
printf("\n( %p : data )-> %d",&a,a);
printf("\n( %p : stack )-> %d",&b,b);
printf("\n( %p : heap )-> %d",c,*c);
printf("\n( %p : rodata )-> %s\n",d,d);

free(c);
}
