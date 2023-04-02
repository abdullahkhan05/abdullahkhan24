#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int a = 54;
    float b = 3.4;
    void *ptr;

    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));

    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));

    return 0;
}