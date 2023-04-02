#include <stdio.h>

int main(float arga,float argb)
{
    printf("Enter the number which you want to addition,subtract,multiply and divide : ");
    scanf("%f", &arga);
    printf("\n");

    printf("Enter the number which you want to addition,subtract,multiply and divide : ");
    scanf("%f", &argb);
    printf("\n");

    printf("The addition between two number is :+%.0f\n", arga + argb);
    printf("The subtract between two numbers is :%.0f\n", arga - argb);
    printf("The multiply between two numbers is :%.0f\n", arga * argb);
    printf("The divide between two numbers is :%.2f\n", arga / argb);
    printf("\n");
    
    return 0;
}