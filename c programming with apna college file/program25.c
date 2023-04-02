#include <stdio.h>

void printassalamualaikum()
{
    printf("assalamualaikum \n");
}

void printHello()
{
    printf("Hello \n");
}

int main()

{
    char ch;
    printf("Enter I for indian and F for french : ");
    scanf("%c", &ch);

    if (ch == 'I')
    {
        printassalamualaikum();
    }
    else
    {
        printHello();
    }

    return 0;
}