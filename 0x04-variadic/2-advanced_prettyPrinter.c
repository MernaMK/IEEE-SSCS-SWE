#include <stdio.h>
#include <stdarg.h>

void prettyPrinter(char flag,char sep,int n, ...)
{
    va_list items;
    va_start(items,n);

    switch(flag)
    {
        case 'i':
            for(int i=0;i<n;i++)
            {
                printf("%d ",va_arg(items,int));
                if(i!=n-1)printf("%c ",sep);
                else printf("\n\n");
            }
            break;
        case 's':
            for(int i=0;i<n;i++)
            {
                printf("%c ",va_arg(items,int));
                if(i!=n-1)printf("%c ",sep);
                else printf("\n\n");
            }
            break;
        default:
            break;
    }




}

void main()
{
prettyPrinter('i','&',6,4,5,6,7,8,9);

prettyPrinter('s','>',4,'a','b','c','d');

}
