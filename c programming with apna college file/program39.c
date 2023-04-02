#include <stdio.h>

void printaddress(int *n)
{
    printf("address of n is : %u\n", n);
}

int main()

{
    int n = 5;
    printf("address of n is : %u\n", &n);
    printaddress(&n);

    return 0;
}