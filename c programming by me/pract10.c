#include <stdio.h>

int main()

{
    char c;
    printf("Enter the alphabet : ");
    scanf("%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("The alphabet is a vowel : %c\n", c);
    }
    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("The alphabet is a vowel : %c\n", c);
    }
    else
    {
        printf("The alphabet is not a vowel : %c\n", c);
    }

    return 0;
}