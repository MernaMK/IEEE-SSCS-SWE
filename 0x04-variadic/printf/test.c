#include "./printf.h"
int main()
{
char *c="hello";
myPrintf("Welcome %s,%%,%c,%d,%d,%b,%o,%x,%X,%u,%p,%_s,%=s,%+d,%-4d,%4d"
,"Hello",'M',777,-9987655,15,271,271,271,271,c,"HELlo123","HELlo123",555,555,555);

return 0;
}

