#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int a = fib(n - 1);
    int b = fib(n - 2);
    int c = a + b;
    for (int i = 0; i <= c; i++)
    {
       return c;
    }
    
}
int main()

{
    int a;
    printf("Enter the number which you want to know the fibonacci sequence : ");
    scanf("%d", &a);
    printf("%d\n", fib(a));

    return 0;
}
