#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int a = 22;
    int *ptr = &a;

    if (ptr != NULL)
    {
        printf("The value of a is %d\n", *ptr);
    }

    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced\n");
    }

    return 0;
}