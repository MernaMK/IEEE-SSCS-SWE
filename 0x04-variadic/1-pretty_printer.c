#include <stdio.h>
#include <stdarg.h>

void prettyPrinter(char s,int n, ...)
{
    va_list nums;
    va_start(nums,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",va_arg(nums,int));
        if(i!=n-1)printf("%c ",s);
        else printf("\n\n");
    }
}

void main()
{
prettyPrinter('&',6,4,5,6,7,8,9);

prettyPrinter('>',4,1,2,3,4);

}
