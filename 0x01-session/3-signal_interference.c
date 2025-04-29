#include "stdio.h"
int signal_strength =0;
void boost_signal(int n)
{
int signal_strength =100;
printf("booster: signal strength = %d\n",n);

}

int main ()
{
int n;
printf("Enter strength :");
scanf("%d",&n);
printf("signal strength = %d\n",signal_strength);
boost_signal(n);
}

