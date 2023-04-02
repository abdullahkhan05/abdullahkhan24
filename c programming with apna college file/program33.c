#include <stdio.h>

int calcpercentage(int urdu, int telugu, int english, int maths, int science, int social)
{
    return ((urdu + telugu + english + maths + science + social) / 6);
}

int main()

{
    int urdu    = 70;
    int telugu  = 70;
    int english = 70;
    int maths   = 90;
    int science = 70;
    int social  = 50;
    printf("The percentage of three subjects is : %d\n", calcpercentage(urdu, telugu, english, maths, science, social));

    return 0;
}