#include <stdio.h>

int main()

{
    double first, second, swap;
    printf("Enter the first number : ");
    scanf("%lf", &first);

    printf("Enter the second number : ");
    scanf("%lf", &second);

    swap = first;
    first = second;
    second = swap;

    printf("After the swaping number is : %.2lf\n", first);
    printf("After the swaping number is : %.2lf\n", second);

    return 0;
}