#include <stdio.h>
#include <string.h>

int main()

{
    char s1[] = "abdullah";
    char s2[] = "arsalan";
    char s3[54];
    // puts(strcat(s1, s2));

    // printf("the length of s1 is %d\n", strlen(s1));
    // printf("the length of s1 is %d\n", strlen(s1));
    // printf("the length of s2 is %d\n", strlen(s2));

    // printf("the reverse string of s1 is:");
    // puts(strrev(s1));
    // printf("the reverse string of s2 is:");
    // puts(strrev(s2));

    // strcpy(s3, strcat(s1, s2));
    // puts(s3);
 
    printf("the strcmp of s1 and s2 returned %d",strcmp(s1,s2));



    return 0;
}