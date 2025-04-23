#include "stdio.h"

int main()
{
    int n;
    printf("Enter # of tables :");
    scanf("%d",&n);
    if (n<=15&&n>=0)
    {
    for ( int num=0;num<=n;num++)
    {
        printf("%d) ",num);
     for (int i=0;i<=n;i++)
    {
        printf("%d",num*i);
        if (i!= n){printf(", ");}
    }
    printf("\n\n");
    }
    }

}
