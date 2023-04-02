#include <stdio.h>

int main()

{
    FILE *ptr = NULL;
    char string[65] = "abdullah is in 1th year\n";
    // this down program is to read the file
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("this is myfile content\t%s\n", string);

    // this down program is to write in the file
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);


    return 0;
}