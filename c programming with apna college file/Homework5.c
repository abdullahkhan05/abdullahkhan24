/*This program is to show the sum of two numbers*/

// #include <stdio.h>

// int printsum(int a, int b)
// {
//     return a + b;
// }

// int main()

// {

//     int first, second;
//     printf("Enter the two number which you want to know the sum : \n");

//     printf("Enter the first number : ");
//     scanf("%d", &first);
//     printf("Enter the second number : ");
//     scanf("%d", &second);

//     printsum(first, second);

//     printf("The sum of two numbers is : %d\n", printsum(first, second));

//     return 0;
// }

/*This program is to show the square root of numbers*/

// #include <math.h>
// #include <stdio.h>

// float findSQRT(float N)
// {
//     return sqrt(N);
// }

// int main()
// {

//     int N = 4;

//     printf("%f ", findSQRT(N));
//     return 0;
// }

/*This program is to show the day is cold or hot */

// #include <stdio.h>

// void temperature(int hot)
// {

//     if (hot > 1)
//     {
//         printf("It is a hot day\n");
//     }
//     else
//     {
//         printf("It is a cold day\n");
//     }
// }

// int main()

// {
//     int a;
//     printf("Enter the temperature : ");
//     scanf("%d", &a);

//     temperature(a);

//     printf("The temperature is : %d\n", a);

//     return 0;
// }

/*This program is to show the square of a number*/
#include <stdio.h>
#include <math.h>

int printpower(int n)
{

    printf("%0.1f\n", pow(n, 2));
    return n;
}

int main()

{
    int n;
    printf("Enter the number which you want the square : ");
    scanf("%d", &n);

    printpower(n);

    return 0;
}