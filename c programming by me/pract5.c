#include <stdio.h>

int main()

{
    int dividend, divisor, quotient, reminder;
    printf("Enter the number which you want to divide it : \n");

    printf("Enter the dividend : ");
    scanf("%d", &dividend);
    printf("Enter the divisor : ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    printf("The divident is : %d\n", quotient);
    printf("The divisor is : %d\n", reminder);

    return 0;
}