#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    printf("file name is %s\n",__FILE__);
    printf("What is the TIME now %s\n",__TIME__);
    printf("What is the DATE today %s\n",__DATE__);
    printf("the LINE no is %d\n",__LINE__);
    printf("ANSI:%d\n",__STDC__);

    return 0;
}