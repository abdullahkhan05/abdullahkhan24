/*This program is to tell the marks*/

#include <stdio.h>

int main()

{
    int marks;
    printf("Enter the marks(1-100) : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)
    {
        printf("you have FAIL\n");
    }

    else if (marks > 30 && marks <= 100)
    {
        printf("you have PASS\n");
    }

    else
    {
        printf("you have entered wrong marks\n");
    }

    /*This line also correct but we can't wright multiple line code so you have to wright if else code*/
    // marks <= 30 ? printf("FAIL\n") : printf("PASS\n");

    return 0;
}
