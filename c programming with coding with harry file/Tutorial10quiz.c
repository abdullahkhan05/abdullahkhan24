#include <stdio.h>

int main()

{
    int maths, science;
    printf("Enter your marks : ");
    scanf("%d %d", &maths, &science);

    printf("you have entered %d,%d as your marks\n", maths, science);

    if (maths >= 45)
    {
        if (science >= 45)
        {
            printf("you have passed in both exams your gift is car");
        }
    }

    else if (maths >= 35)
    {
        printf("you have passed in maths your gift is bike");                                          
    }

    else if (science >= 25)
    {
        printf("you have passed in science your gift is whole statanary box");
    }

    else
    {
        printf("you have fail in both exams maths and science");
    }

    return 0;
}