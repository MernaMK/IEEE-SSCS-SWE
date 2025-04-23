#include "stdio.h"
#include "myPutchar.h"
int main()
{
for(int n =0 ;n<=7; n++)
{
    for(int i = n+1 ;i<=8; i++)
        {
            for(int j = n+2 ;j<=9; j++)
            {   myPutchar(n+'0');
                myPutchar(i+'0');
                myPutchar(j+'0');
                if(n==7 && i==8 && j==9)
                {
                myPutchar('\n');
                continue ;
                }
                myPutchar(',');
                myPutchar(' ');

            }
    }
}
myPutchar('\n');
}
