#include <stdio.h>

int main()

{
    int age, marks;
    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your marks:");
    scanf("%d", &marks);

    switch (age)
    {
    case 5:
        printf("your age is 5\n");
        switch (marks)
        {
        case 55:
            printf("your marks is 55\n");
            break;

        default:
            printf("your marks is not 55\n");
            break;
        }
        break;

    case 10:
        printf("your age is 10\n");
        break;
    case 15:

        printf("your age is 15\n");
        break;

    default:
        printf("your age is not 5,10 or 15\n");
        break;
    }

    return 0;
}