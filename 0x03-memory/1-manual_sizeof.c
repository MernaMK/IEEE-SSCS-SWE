#include "stdio.h"

int manual_sizeof()
{
int n;
int *p=&n;
n=(char *)p - (char *)p++;
return n;
}

int main()
{
printf("Size of integer: %d byte\n\n",manual_sizeof());
}
