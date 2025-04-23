#include "stdio.h"
#include "myPutchar.h"

char myPutchar(char c)
{
write (1,&c,1);
}

