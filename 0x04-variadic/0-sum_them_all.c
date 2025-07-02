#include <stdio.h>
#include <stdarg.h>

int sum_all(int n, ...)
{
    va_list nums;
    va_start(nums,n);

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=va_arg(nums,int);;
    }
    return sum;
}

void main()
{
    printf("sum1:%d\n",sum_all(5,1,2,3,4,5));
    printf("sum2:%d\n",sum_all(2,1,2));

}
