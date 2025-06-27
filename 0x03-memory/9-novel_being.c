#include<stdio.h>

struct Being
{
    char *name;
    int age;
    float energy_level;
};

void print_being(struct Being *b)
{
    printf("Name:{%s},Age:{%d},Energy:{%.2f}\n",b->name,b->age,b->energy_level);
}
void main()
{

struct Being a={"first",5,80.5};
print_being(&a);

}

