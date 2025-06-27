#include<stdio.h>

void access()
{
    static int n=0;
    printf("total accesses is (%d) times\n\n",++n);
}

void access_one()
{
    static int n=0;
    printf("function 1 accessed (%d) times\n",++n);
    access();
}

void access_two()
{
    static int n=0;
    printf("function 2 accessed (%d) times\n",++n);
    access();
}


void main() {


    access_one();
    access_one();
    access_one();
    access_one();
    access_one();

    access_two();
    access_two();
    access_two();

}
