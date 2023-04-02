#include <stdio.h>

int main()

{
    int n;
    do
    {
        printf("Enter the even number : ");
        scanf("%d", &n);

        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1);

    printf("This is not a even number");

    return 0;
}

