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
                            if (num < 0)
                            {
                                myPutchar('-');
                                count++;
                                num = -num;
                            }
			    count+=printNumberBase(num,10);
                            break;
                        }
			case 'b':
                        {
			    int num = va_arg(vars,int);
                            count+=printNumberBase(num,2);
			    break;
                        }
			case 'u':
                        {
                            int num = va_arg(vars, int);
                            count+=printNumberBase(num,10);
                            break;
                        }

                        case 'o':
                        {
                            int num = va_arg(vars,int);
                            count+=printNumberBase(num,8);
			    break;
			}
			case 'x':
                        {
                            int num = va_arg(vars,int);
                            count+=printNumberBase(num,16);
                            break;
                        }
                        case 'X':
                        {
                            int num = va_arg(vars,int);
                            count+=printNumberBase(num,17);
                            break;
                        }
                        case 'p':
                        {
                            void *ptr = va_arg(vars, void*);
                            if (ptr == NULL)
                            {
                                myPrintf("(nil)");
                                count += 5;
                            }
                            else
                            {
                                myPrintf("0x");
                                count += 2;
                                unsigned long adr = (unsigned long)ptr;
                                char buffer[20];
                                int i = 0;
                                if (adr == 0)
                                {
                                    myPutchar('0');
                                    count++;
                                }
                                else
                                {
                                    while (adr != 0)
                                    {
                                        int digit = adr % 16;
                                        if (digit < 10)
                                        {
  			                	buffer[i++] = digit + '0';
                                        } 
					else 
					{
                    				buffer[i++] = digit - 10 + 'a';
                			}
                			adr /= 16;
            			    }

            			    while (i > 0) 
				    {
                    			myPutchar(buffer[--i]);
                			count++;
            			    }
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

