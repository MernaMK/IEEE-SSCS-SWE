# include "stdio.h"

void echo (int n)
{
printf("%d: Echo\n",n);
if (n-1!=0)
{echo(n-1);}
}

int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
echo(n);

}

