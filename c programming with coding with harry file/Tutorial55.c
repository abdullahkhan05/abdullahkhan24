#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int a = 56;
    int *ptr;
    // *ptr = 32;
    ptr = &a;
    printf("The value of a is %d\n", *ptr); 
        // scanf("%d");

        return 0;
}