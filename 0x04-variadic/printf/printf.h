#ifndef myPutchar_H
#define myPutchar_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"
#include "stdarg.h"
#include <limits.h>

int myPutchar(int c);
int printNumberBase(int num,int base,int fillBits);
int myPrintf(char* format,...);

#endif
