#include <stdio.h>

int main()

{
    int a, b, product;
    printf("Enter the number which you want to multiple of two numbers : \n");

    printf("Enter the first number  : ");
    scanf("%d", &a);

    printf("Enter the second number  : ");
    scanf("%d", &b);

    product = a * b;

    printf("The multiple of two number is : %d\n", product);
    


    return 0;
}