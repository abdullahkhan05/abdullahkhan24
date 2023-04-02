#include <stdio.h>

void changevalue(int *address)
{
    *address =54; 
}

int main()

{
    int a = 32,b=56;

    printf("the value of a is %d\n",a);
    changevalue(&a);
    printf("the value of a is %d\n",a);
    return 0;
}