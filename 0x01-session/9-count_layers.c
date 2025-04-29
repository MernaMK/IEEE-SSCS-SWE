# include "stdio.h"

int sum_layers(int n)
{
if(n>=1)
{return n+sum_layers(n-1);}
else {return 0;}
}

int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("Sum:%d\n",sum_layers(n));

}

