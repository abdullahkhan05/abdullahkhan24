#include <stdio.h>

int main()

{
    int num;
    printf("Enter the number which you want to know the number is Positive or Negative : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("This number is Positive number : %d\n", num);
    }

    else if (num < 0)
    {
        printf("This number is Negative number : %d\n", num);
    }

    else
    {
        printf("This is not a Positive or Negative number : %d\n", num);
    }

    return 0;
}