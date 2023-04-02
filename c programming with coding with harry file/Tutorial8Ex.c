#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);

    switch (age)
    {
    case 7:
        printf("this is amar ibn yaseer\n");
        break;
    case 5:
        printf("this is hamza ibn yaseer\n");
        break;
    case 4:
        printf("this is talha ibn yaseer\n");
        break;
    case 3:
        printf("this is iqura tabsoom sheema\n");
        break;

    case 1:
        printf("this is syed arshian\n");
        break;
    
    default:
         printf("your age is not 7,5,4,3,1\n");
        break;
    }
    

    return 0;
}