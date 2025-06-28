#include <stdio.h>
#include <string.h>


void echo_data(void *data,char type)
{
    switch(type) {
        case 'i':
            printf("%d\n", *(int *)data);
            break;
        case 'f':
            printf("%f\n", *(float *)data);
            break;
        case 'c':
            printf("%c\n", *(char *)data);
            break;
        default:
            printf("Unknown data type\n");
    }
}

void main()
{
    int a=9;
    float b=12.5;
    char c='c';
    echo_data(&a,'i');
    echo_data(&b,'f');
    echo_data(&c,'c');

}
