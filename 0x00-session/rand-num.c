#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /*output should be: number n last digit is (even | odd),
        the last digit is num, and it is (more | less) than 5*/
printf("number is %d \n",n);
if (n%2 ==0) printf("number is even\n");
else  printf("number is odd\n");

if (n%10 > 5)  printf("last digit is greater than 5\n");
else if (n%10 < 5)  printf("last digit is less than 5\n");
else  printf("last digit equals 5\n");
return (0);
}

