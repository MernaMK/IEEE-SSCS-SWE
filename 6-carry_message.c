# include "stdio.h"

void print_message(char *msg)
{
printf("message: %s\n",msg);
}
int main ()
{
char message[]="Welcome!!";

print_message(message);
}

