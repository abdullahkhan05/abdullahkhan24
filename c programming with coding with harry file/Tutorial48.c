#include <stdio.h>
#include <stdlib.h>

int main()

{
    int *ptr;
    int a;
    char b, d;
    printf("Enter the characters in your Employs ID:\n");
    scanf("%d", &a);
    getchar();

    printf("Enter the character B:\n");
    scanf("%c", &b);
    getchar();

    printf("Enter the character D:\n");
    scanf("%c", &d);

    ptr = (int *)calloc(a, sizeof(int));
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter your ID \n", a);
        printf("Enter the value %d of this character array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 1; i <= a; i++)
    {
        printf("your employs ID is %d of this array is %d\n", i, ptr[i]);
    }
    printf("\n\n");

    // // Employ:2
    // printf("Enter the characters in your Employs ID:\n");
    // scanf("%d", &a);
    // ptr = (int *)realloc(ptr, a * sizeof(int));
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("Enter your ID \n", a);
    //     printf("Enter the value %d of this character array\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("your employs ID is %d of this array is %d\n", i, ptr[i]);
    // }
    // printf("\n\n");

    // // Employ:3
    // printf("Enter the characters in your Employs ID:\n");
    // scanf("%d", &a);
    // ptr = (int *)realloc(ptr, a * sizeof(int));
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("Enter your ID \n", a);
    //     printf("Enter the value %d of this character array\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("your employs ID is %d of this array is %d\n", i, ptr[i]);
    // }
    free(ptr);

    return 0;
}