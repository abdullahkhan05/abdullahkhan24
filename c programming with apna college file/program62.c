#include <stdio.h>

int main()

{
    FILE *fptr;
    fptr = fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter the name : ");
    scanf("%s", name);
    printf("Enter the age : ");
    scanf("%d", &age);
    printf("Enter the cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr,"student name is : %s\n",name);
    fprintf(fptr,"student age is : %d\n",age);
    fprintf(fptr,"student cgpa is : %0.2f",cgpa);

    fclose(fptr);

    return 0;
}