#include <stdio.h>
#include <string.h>

void checkchar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return;
        }
    }
    printf("character is NOT present");
}

int main()

{
    char str[] = "Helloworld";
    char ch = 'e';
    checkchar(str, ch);

    return 0;
}