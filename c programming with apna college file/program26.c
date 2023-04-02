// #include <stdio.h>
// int sum(int x,int y)
// {
//     return x+y;
// }
// int main()

// {
//     int a,b,s;
//     printf("Enter the first number : ");
//     scanf("%d",&a);
//     printf("Enter the second number : ");
//     scanf("%d",&b);

//     s = sum(a,b);
//     printf("The sum of two numbers is :%d\n",s);

//     return 0;
// }

#include <stdio.h>

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
int main()

{
    int n;
    printf("Enter the number which you want to multiply : ");
    scanf("%d", &n);
    
    printTable(n);

    return 0;
}