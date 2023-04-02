#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()

{
    // if 1 has come then that is even number
    // if 0 has come then that is odd number
    int x;
    printf("Enter the number :");
    scanf("%d", &x);

    printf(":%d\n", x % 2 == 0);

    return 0;
}