#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()

{
    int num;
    printf("Enter the number which you want the factorial:");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));

    return 0;
}