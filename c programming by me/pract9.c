#include <stdio.h>

int main()

{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even : %d\n", num);
    }
    else
    {
        printf("The number is odd : %d\n", num);
    }

    return 0;
}