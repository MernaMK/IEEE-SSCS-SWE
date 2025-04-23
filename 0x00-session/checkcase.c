#include "stdio.h"

int main()
{
char c;
printf("Enter a letter: ");
scanf("%c",&c);
if ((int)c >='a'&&(int)c <='z')
{printf("lower case");}
else if ((int)c >='A'&&(int)c <='Z')
{printf("upper case");}
else 
{printf("not valid");}
{printf("\n");}
}
