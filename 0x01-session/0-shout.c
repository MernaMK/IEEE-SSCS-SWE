# include "stdio.h"

int repeat_message(int n)
{
for (int i=0;i<n;i++)
{
printf("%d: Hello,world \n",i+1);
}
}

int main()
{
int n ;
printf("Enter number of repeats: ");
scanf("%d",&n);
repeat_message(n);
}
