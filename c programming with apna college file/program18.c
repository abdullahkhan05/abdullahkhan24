#include <stdio.h>

int main()

{
    int n;
    do
    {
        printf("Enter the even number : ");
        scanf("%d", &n);

        printf("%d\n", n);

        if (n % 7 == 0)
        {
            break;
        }

    } while (1);

    printf("This is a multiple of 7");

    return 0;
}