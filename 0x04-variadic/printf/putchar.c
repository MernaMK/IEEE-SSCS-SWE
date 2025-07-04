#include "unistd.h"
#include "printf.h"

int myPutchar(int c)
{
if(write (1,&c,1)==1)return 1;
else return 0;
}
