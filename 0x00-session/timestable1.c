#include "stdio.h"

int main()
{
    for (int n=0;n<=9;n++)
    {
        printf("%d) ",n);
     for (int i=0;i<=9;i++)
    {
        printf("%d",n*i);
        if (i!= 9){printf(", ");}
    }
    printf("\n\n");
    }
}

