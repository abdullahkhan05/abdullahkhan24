#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("you have entered your age %d\n", age);

    if (age>=18)
    {
        printf("you can vote"); 
    }
    
    else if (age>=10)
    {
        printf("you can vote for kids");
    }
    
    else
    {
        printf("you can't vote for anyone");
    }
    

    return 0;
}