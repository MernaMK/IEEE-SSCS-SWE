#include<stdio.h>
#include<stdlib.h>

void freeArray(int***arr)
{
    int **temp=*arr;
    while (*temp!=NULL)
    {
        free(*temp);
        temp++;
    }
    free(*arr);
    *arr=NULL;
}

void main()
{

int **arr = (int**)malloc(4 * sizeof(int*));

    arr[0] = (int*)malloc(2 * sizeof(int));
    arr[1] = (int*)malloc(2 * sizeof(int));
    arr[2] = (int*)malloc(2 * sizeof(int));
    arr[3] = NULL;

    arr[0][0] = 1; arr[0][1] = 2;
    arr[1][0] = 3; arr[1][1] = 4;
    arr[2][0] = 5; arr[2][1] = 6;

printf("\nbefore: %p",arr);
freeArray(&arr);
printf("\nafter: %p",arr);

return;
}
