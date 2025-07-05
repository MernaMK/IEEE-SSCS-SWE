#include "unistd.h"
#include "printf.h"

int myPutchar(int c)
{
if(write (1,&c,1)==1)return 1;
else return 0;
}

int printNumberBase(int num, int base ) 
{
    char buffer[20];
    int i = 0;
    int count = 0;
    int uppercase = (base == 17); // Check for uppercase hex

    if (base == 17) base = 16; // Actual base for hex

    if (num == 0) {myPutchar('0');return 1;}
    else if (num < 0) return 0;
    while (num != 0) 
    {
        int digit = num % base;
        if (digit < 10) buffer[i++] = digit + '0';
        else 
	{
            if (uppercase)buffer[i++] = digit - 10 + 'A';
            else buffer[i++] = digit - 10 + 'a';
        }    
	num /= base;
    }

    while (i > 0) {
        myPutchar(buffer[--i]);
        count++;
    }

    return count;
}
