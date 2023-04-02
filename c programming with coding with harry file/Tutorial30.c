#include <stdio.h>

void Starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void ReverseStarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()

{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reverse star pattern :");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("Enter the rows:");
        scanf("%d", &rows);

        Starpattern(rows);
        break;

    case 1:
        printf("Enter the rows:");
        scanf("%d", &rows);

        ReverseStarpattern(rows);
        break;

    default:
        printf("you have entered invalid number\n");
        break;
    }
    return 0;
}