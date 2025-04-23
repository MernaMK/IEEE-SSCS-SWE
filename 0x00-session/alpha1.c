#include <stdio.h>
#include "myPutchar.h"
int main(void)
{

// a=97,z=122,A=65,Z=90

    for (int i=0;i+'a'<='z';i++)
    {
      if((i+'a')=='q')
      {
          continue;
      }
      else
        {myPutchar(i+'a');}
    }
    myPutchar('\n');
for (int j=0;'Z'-j>='A';j++)
    {
      if(('Z'-j)=='Q')
      {
          continue;
      }
      else
        {myPutchar('Z'-j);}
    }
    myPutchar('\n');
}
