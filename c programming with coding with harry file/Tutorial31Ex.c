#include <stdio.h>

int sum(int *a, int *b)
{
    return *a, *b;
}

int main()

{
    int a, b, c;
    a = 4,
    b = 3;
    printf("The value of a is :%d\n", a);
    printf("The value of b is :%d\n", b);
    sum(&a, &b);

    printf("The addition of a and b is :%d\n", a + b);
    printf("The subtraction of a and b is :%d\n", b - a);

    return 0;
}