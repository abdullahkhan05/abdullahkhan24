#include <stdio.h>

int main()

{
    int n1, n2, LCM, gcd;
    printf("Enter the number which you want the to divide : ");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)

            gcd = i;
    }
    LCM = (n1 * n2) / gcd;

    printf("L.C.M of %d and %d is %d\n", n1, n2, LCM);

    return 0;
}