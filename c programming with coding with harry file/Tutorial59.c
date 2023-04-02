#include <stdio.h>
#define PI 3.2
#define SQUARE(r) r *r

int main()

{
    float var = PI;
    int r = 4;
    printf("The value of PI is %f\n", var);
    printf("The area of circle is %f\n", PI * SQUARE(r));

    return 0;
}