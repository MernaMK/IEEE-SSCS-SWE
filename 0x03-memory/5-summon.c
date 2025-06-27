#include<stdio.h>
#include<stdlib.h>
int *input(int *arr,int n)
{

if(arr==NULL)return NULL;

for (int i=0;i<n;i++)
{
    printf("Item %d: ",i+1);
    scanf("%d",&arr[i]);
}

return arr;
}


void main()
{
int n=0;
printf("Number of items:");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

input(arr,n);

if(arr==NULL)printf("\n\nallocation failed\n\n");

else
{
    printf("\n\nList");
    for (int i=0;i<n;i++)
    {
        printf("\n%d): %d ",i+1,arr[i]);
    }
    printf("\nAddress: %p ",arr);
    free(arr);
    arr=NULL;
}

}
