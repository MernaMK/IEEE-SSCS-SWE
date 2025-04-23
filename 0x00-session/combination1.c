#include "stdio.h"
#include "myPutchar.h"

int main()
{
for(int n =0 ;n<=8; n++)
{
    for(int i = n+1 ;i<=9; i++)
    {
        myPutchar(n+'0');
          myPutchar(i+'0');
        if(n==8 && i==9)
        {
           myPutchar('\n');  
           continue ;
        }
         myPutchar(',');
              myPutchar(' ');
    }

}
}
