#include <stdio.h>

float convertTemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}
int main()

{
    float far = convertTemp(37);
    printf("Faharenheit Tempurate is :%f\n", far);

    return 0;
}