// this program is to print the average of three numbers

// #include <stdio.h>

// int main()

// {
//     int a, b, c;
//     float avg;
//     printf("Enter the Three numbers which you want to get AVERAGE:\n");

//     printf("\nEnter the First number :", a);
//     scanf("%d", &a);

//     printf("\nEnter the second number :", b);
//     scanf("%d", &b);

//     printf("\nEnter the third number :", c);
//     scanf("%d", &c);

//     avg = (a + b + c) / 3.0;

//     printf("The AVERAGE of three number is :%0.3f\n", avg);

//     return 0;
// }

// This program is to print the given charater is digit or not
// #include <stdio.h>

// int main()

// {
//     char a;

//     printf("Enter the number:\n");
//     scanf("%d", &a);

//     printf("%d\n", a > 0 && a <= 9);

//     return 0;
// }

#include <stdio.h>

int main()

{
    int a, b;
    printf("Enter the two numbers :\n");

    printf("\nEnter the first number :");
    scanf("%d", &a);

    printf("\nEnter the second number :");
    scanf("%d", &b);

    printf("\nThe smallest number is :%d\n", b > a ? a : b);

    return 0;
}