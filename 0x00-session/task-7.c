#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number [1:9] : ");
    scanf("%d",&n);

    if(n <=9 && n >=1)
    {
        printf("'%c' = %d \n ",n + '0',n + '0');
    }
    else
    {

        printf("Number is not valid \n");
    }

}

