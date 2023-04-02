#include <stdio.h>

struct complex
{
    int real;
    int imp;
};


int main()

{
    struct complex number1={5,8};
    struct complex *ptr =&number1;
    printf("real part : %d\n",ptr->real);
    printf("imp part : %d\n",ptr->imp);

    return 0;
}