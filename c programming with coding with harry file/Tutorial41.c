#include <stdio.h>
#include <string.h>
void parser(char a[])
{
    for (int i = 5; i < 23; i++)
    {
        printf("%c",a[i]);
    }
    
}

int main()

{
    char str[]="<h1> This is a heading <h1>";
    printf("This is a parser\n");
    parser(str);

    return 0;
}