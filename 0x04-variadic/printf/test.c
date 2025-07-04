#include "./printf.h"
int main()
{
myPrintf("Welcome %s,%%,%c,%d,%d,%b,%o,%x,%X,%u"
,"Hello",'M',777,-9987655,15,271,271,271,271);
return 0;
}
