/*revursive appproach*/

#include <stdio.h>
int fib(int n)
{
    if (n == 0 || n == 1 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()

{
    int a;
    printf("Enter the fibonacci series:");
    scanf("%d", &a);

    a == fib(a + 1);

    printf("the fibonacci series is: %d\n", fib(a - 1));

    return 0;
}
