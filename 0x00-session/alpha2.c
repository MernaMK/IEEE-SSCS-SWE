#include <stdio.h>
#include "myPutchar.h"
int main(void)
{

// a=97,z=122,A=65,Z=90
for (int j=0;j<=4;j++)
{
    for (int i=0;i+'a'<='z';i++)
    {
      myPutchar(i+'a');
    }
    myPutchar('\n');
}
}
