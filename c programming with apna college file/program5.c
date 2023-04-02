#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()

{
    int x;
    printf("Enter the number :\n");
    scanf("%d", &x);

    printf("The number is divid by 2 is :%d\n", x % 2 == 0);

    return 0;
}