#include <stdio.h>

int main()

{
    label:
    printf("we are inside the label\n");
    goto end;
       printf("hello\n");
    goto label;
    end:
       printf("you are outside the label\n");

    return 0;
}