#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int GeneratingRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()

{
    printf("The random number between 0 to 10 is %d\n", GeneratingRandomNumber(10));

    return 0;
}