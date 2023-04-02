#include <stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}

int main()

{

    printf("The sum is : %d\n", sum(4));

    return 0;
}