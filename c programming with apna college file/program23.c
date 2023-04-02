#include <stdio.h>

int main()

{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }

    printf("The sum is between 5 to 50 is : %d", sum);

    return 0;
}