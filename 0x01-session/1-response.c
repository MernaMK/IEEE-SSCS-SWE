# include "stdio.h"

int is_response_detected(int strength)
{
if (strength>=50)
{return 1;}
else {return 0;}
}

int main ()
{
int strength;
printf("Enter strength :");
scanf("%d",&strength);
if(is_response_detected(strength)==1)
{printf("Response is detected\n");}
else
{printf("Not detected\n");}
}
