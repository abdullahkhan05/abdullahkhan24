#include <stdio.h>

int main()

{
    double n1, n2, n3;
    printf("Enter the three diffrent number : \n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("%.2f is the largest number\n", n1);
    }
    if (n2 >= n1 && n2 >= n3)
    {
        printf("%.2f is the largest number\n", n2);
    }
    if (n3 >= n2 && n3 >= n1)   
    {
        printf("%.2f is the largest number\n", n3);
    }

    return 0;
}