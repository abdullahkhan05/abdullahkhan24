#include <stdio.h>

float AreaOfSquare(float side)
{
    return side * side;
}
float CircleArea(float radius)
{
    return 3.14 * radius * radius;
}
float RectangleArea(float a, float b)
{
    return a * b;
}

int main()

{
    float s;
    float a = 5.0;
    float b = 3.0;
    printf("area of a rectangle is : %0.3f\n", RectangleArea(a, b));
    

    CircleArea(a);
    printf("area of a circle is : %0.3f\n", CircleArea(a));
   
    AreaOfSquare(a);
    printf("area of a square is : %0.3f", AreaOfSquare(a));
   

    return 0;
}