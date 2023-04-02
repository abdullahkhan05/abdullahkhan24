/*r,w,a,this is the normal way to access the file*/
/*r+,w+,a+ this is also the way to access the file */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    // char c = fgetc(ptr);
    // printf("The character is :%c\n", c);
    // c = fgetc(ptr);
    // printf("The character is :%c\n", c);

    char str[5];
    fgets(str, 9, ptr);
    printf("The string is :%s\n", str);

    // fputc('a', ptr);
    // fputs("this is abdullah", ptr);

    fclose(ptr);

    return 0;
}