#include "./printf.h"
int main()
{
char *c="hello";
myPrintf("Welcome %s,%%,%c,%d,%d,%b,%o,%x,%X,%u,%p"
,"Hello",'M',777,-9987655,15,271,271,271,271,c);
return 0;
}
