#include <stdio.h>

int main()

{
    int i=6;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("i = %d\n",**pptr);

    return 0;
}