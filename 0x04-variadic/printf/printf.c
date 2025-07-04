#include "printf.h"

int myPrintf(char* format,...)
{
va_list vars;
if(format==NULL) return -1;
va_start(vars,format);
int count=0;
while(*format !='\0')
{
        if(*format!='%')
	{
		myPutchar(*format);
		count++;
        }
else
        {
                format++;
                if(*format=='\0')break;
                switch(*format)
                {
                        case '%':
                            myPutchar('%');
                            count++;
			    break;

                        case 'c':
                            myPutchar(va_arg(vars,int));
                            count++;
			    break;

                        case 's':
                        {    char *str= va_arg(vars,char*);
                            if(str==NULL)str="null";
                            else
                            {
                                while(*str)
                                {
                                    myPutchar(*str);
                                    count++;
                                    str++;
                                }
                            }
			    break;
			}

                }
        }
	format++;
}
return count;
}

