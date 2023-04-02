#include <stdio.h>

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

int main()

{
    char name[100];
    printf("please enter your name so we have to know the length of your name : ");
    scanf("%d", &name);

    fgets(name, 100, stdin);
    printf("The length of your name is : %d\n", countLength(name));

    return 0;
}