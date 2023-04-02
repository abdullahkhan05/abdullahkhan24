#include <stdio.h>

void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
    
}

int main()

{
    char firstname[] = "Abdullah";
    char lastname[] = "Khan";

    printstring(firstname);
    printstring(lastname);

    return 0;
}