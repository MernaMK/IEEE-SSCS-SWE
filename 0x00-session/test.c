#include <stdio.h>
#include "myIsalpha.h"


int main()
{
char ch;
printf("Enter:");
scanf(" %c",&ch);
printf("%d",myIsalpha(ch));
return 0 ;
}
