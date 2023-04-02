#include <stdio.h>

int main()

{
    int natural_num;
    printf("Enter the number which you want to no weather a number is a natural number or not : ");
    scanf("%d", &natural_num);

    if (natural_num >= 1)
    {
        printf("This is a natural number\n");
    }

    else if (natural_num >= 0 && natural_num <= 0)
    {
        printf("This is also a natural number but in history 0 is not a natural number\n");
    }

    else
    {
        printf("This is a not a natural number\n");
    }

    return 0;
}