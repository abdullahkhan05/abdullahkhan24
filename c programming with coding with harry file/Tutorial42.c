#include <stdio.h>

int b = 65; // this is a gobal variable since it is declared inside main()
int fun1(int b1)
{
    static int myvar = 5;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The value of b is %d\n", b);
    // printf("The value of b is %d\n",&b);
    return b1 + myvar;
}

int main()

{
    int b = 345;
    // printf("The value of b is %d\n",&b);
    int val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    int *ptr = &val;
    // printf("The value  of fun1 is %d\n", val);

    return 0;
}