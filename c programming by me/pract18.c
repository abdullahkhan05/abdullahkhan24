#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    printf("Factorial of %d = %d", n, fact);

    return 0;
}
