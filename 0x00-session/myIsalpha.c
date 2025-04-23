#include "stdio.h"
#include "unistd.h"
int myIsalpha(char c)
{
if((((int)c>='a')&&((int)c<='z'))||(((int)c>='A')&&((int)c<='Z')))
{return 1 ;}
else {return 0 ;}
}
