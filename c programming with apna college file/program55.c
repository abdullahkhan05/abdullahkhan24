#include <stdio.h>
#include <string.h>

struct students
{
    char name[100];
    int roll_no;
    float cgpa;
};

int main()

{
    struct students s1;
    s1.roll_no = 5;
    s1.cgpa = 7.9;
    strcpy(s1.name, "sumair");
    printf("student name = %s\n", s1.name);
    printf("student roll_no = %d\n", s1.roll_no);
    printf("student cgpa = %0.2f\n", s1.cgpa);
    printf("\n");
    
    struct students s2;
    s2.roll_no = 6;
    s2.cgpa = 8.5;
    strcpy(s2.name, "salman");
    printf("student name = %s\n", s2.name);
    printf("student roll_no = %d\n", s2.roll_no);
    printf("student cgpa = %0.2f\n", s2.cgpa);
    printf("\n");
    
    struct students s3;
    s3.roll_no = 7;
    s3.cgpa = 9.0;
    strcpy(s3.name, "faiz");
    printf("student name = %s\n", s3.name);
    printf("student roll_no = %d\n", s3.roll_no);
    printf("student cgpa = %0.2f\n", s3.cgpa);

    return 0;
}