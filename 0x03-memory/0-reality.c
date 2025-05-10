#include "stdio.h"

void status (int n)
{
    if(n>0)printf("Positive\n\n");
    else if(n<0)printf("Negative\n\n");
    else if(n==0)printf("Zero\n\n");
}

int main()
{
	int n;
    void (*pStatus)(int)=&status;
	printf("Number: ");
	scanf("%d",&n);
    (*pStatus)(n);

}
