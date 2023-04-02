#include <stdio.h>

int main()

{
    float price[3];
    printf("Enter the 1 price : ");
    scanf("%f", &price[0]);

    printf("Enter the 2 price : ");
    scanf("%f", &price[1]);

    printf("Enter the 3 price : ");
    scanf("%f", &price[2]);

    printf("Total price 1 is : %0.3f\n", price[0] + (0.18 * price[0]));
    printf("Total price 2 is : %0.3f\n", price[1] + (0.18 * price[1]));
    printf("Total price 3 is : %0.3f\n", price[2] + (0.18 * price[2]));

    return 0;
}
