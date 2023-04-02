#include <stdio.h>

int main()

{
    int a = 5;
    int *ptra = &a;//the pointer is to put the address of another variable such as 'a' address is stored in pointer  
    printf("the address of a is %x\n", &ptra);//this line is to print the pointer address
    printf("the value of a is %x\n", ptra);//this line is to print the 'a' address
    printf("the value of a is %d\n", *ptra);//this line is to print the value is inside the pointer

    return 0;
}