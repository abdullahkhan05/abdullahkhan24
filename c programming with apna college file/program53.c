#include <stdio.h>
#include <string.h>

int countVowel(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()

{
    char str[] = "Helloworld";
    printf("The total vowel in the word is : %d\n", countVowel(str));

    return 0;
}