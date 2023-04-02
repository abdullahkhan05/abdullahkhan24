#include <stdio.h>

int main()

{
    char firstname[50];
    printf("please enter your name : ");
    scanf("%s", firstname);

    printf("your name is : %s", firstname);

    return 0;
}

// #include <stdio.h>

// int main()

// {
//     char str[100];
//     fgets(str, 100, stdin);
//     puts(str);

//     return 0;
// }