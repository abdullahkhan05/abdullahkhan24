/*with argument and with return value */

// #include <stdio.h>
// int sum(int a, int b)
// {
//     return a + b;
// }
// int main()

// {
//     int a, b, c;
//     a = 10;
//     b = 8;
//     c = sum(a, b);
//     printf("the sum is :%d", c);

//     return 0;
// }

/*with argument and without return value*/

// #include <stdio.h>
// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');
//     }

// }

// int main()

// {
//     printstar(10);

//     return 0;
// }

/*without argument and with return value */

// #include <stdio.h>
// int takenumber()
// {
//     int i;
//     printf("Enter a number:");
//     scanf("%d", &i);
//     return i;
// }

// int main()

// {
//     int c;
//     c = takenumber();
//     printf("the number is :%d", c);

//     return 0;
// }

/*without argument and without return value */

#include <stdio.h>

void table()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    printf("you have entered number is :%d\n", a);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d =%d\n", a, i, a * i);
    }
}

int main()

{
    table();

    return 0;
}