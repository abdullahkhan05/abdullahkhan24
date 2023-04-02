#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

}

int main()

{
   
    // char str[] ={'a','b','d','u','l','l','a','h','\0'};
    // char str[9] = "abdullah";

     

    char str[34];
    gets(str);
    printf("Using custom function printStr\n");
    printstr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    

    return 0;
}