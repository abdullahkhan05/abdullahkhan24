#include <stdio.h>

int main()

{
    char c;
    printf("Enter the character : ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("This is a alphabet : %c\n", c);
    }

    else if (c >= 'a' && c <= 'z')
    {
        printf("This is a alphabet : %c\n", c);
    }

    else
    {
        printf("This is not an alphabet : %c\n", c);
    }

    return 0;
}