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
			case 'i':
			case 'd':
                        {
                            int num = va_arg(vars, int);
                            char buffer[12];
                            int i = 0;

                            if (num == 0)
                            {
                                myPutchar('0');
                                count++;
                                break;
                            }

                            if (num < 0)
                            {
                                myPutchar('-');
                                count++;
                                num = -num;
                            }

                            while (num > 0)
                            {
                                buffer[i++] = (num % 10) + '0';
                                num /= 10;
                            }
                            while (i > 0)
                            {
                                myPutchar(buffer[--i]);
                                count++;
                            }
			    i=0;
                            break;
                        }
			case 'b':
                        {
			    int num = va_arg(vars,int);
                            int buffer[12];
                            int i=0;
                            if (num<0)
                            {
                                myPrintf("%s","not positive");
                                break;
                            }
                            else
                            {
                                while(num!=0)
                                {
                                    buffer[i]=(num%2)+'0';
                                    if(num%2==1)num=(num-1)/2;
                                    else num=num/2;
                                    i++;
                                }
                                while(i<12)
                                {
                                    buffer[i]='0';
                                    i++;
                                }
                                while (i > 0)
                                {
                                    myPutchar(buffer[--i]);
                                    count++;
                                }
                            	i=0;
			    }
			    break;
                        }

                }
        }
	format++;
}
return count;
}

