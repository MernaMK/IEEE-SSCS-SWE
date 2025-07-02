#include <stdio.h>
#include <stdarg.h>

void superPrinter(char *flag, ...)
{
    va_list items;
    va_start(items,flag);
for(int i=0;flag[i]!='\0';i++)
{
    switch(flag[i])
    {
        case 'i':
            printf("%d ",va_arg(items,int));
            break;
        case 'c':
            printf("%c ",va_arg(items,int));
            break;
        case 's':
            char* str=va_arg(items,char*);
            if(str!=NULL)printf("%s ",str);
            else printf("(nil)");
            break;
        case 'f':
            printf("%f ",(float)va_arg(items,double));
            break;
        default:
            va_arg(items,char*);
            printf("Type is not valid");
            break;

    }
    printf("\n\n");
}


}

void main()
{
    superPrinter("ifswcs",4,3.44,NULL,711,'g',"DONE");
}

