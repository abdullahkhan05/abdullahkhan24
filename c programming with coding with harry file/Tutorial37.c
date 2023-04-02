#include <stdio.h>
#include <string.h>
struct students
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()

{
    int n;
    printf("enter the following details:");
    scanf("%d", &n);

        struct students abdullah, arsalan, zakir;
        abdullah.id = 1;
        arsalan.id = 2;
        zakir.id = 3;

        abdullah.marks = 420;
        arsalan.marks = 440;
        zakir.marks = 470;

        abdullah.fav_char = 'I';
        arsalan.fav_char = 'M';
        zakir.fav_char = 'Z';

        switch (n)
        {
        case 1:
            strcpy(abdullah.name, "Abdullah Khan");
            printf("abdullah's id is %d\n", abdullah.id);
            printf("abdullah's marks is %d\n", abdullah.marks);
            printf("abdullah's fav_char is %c\n", abdullah.fav_char);
            printf("abdullah's name is: %s\n", abdullah.name);
            printf("\n");
            break;

        case 2:
            strcpy(arsalan.name, "Mohammed Arsalan Quraishi");
            printf("arsalan's id is %d\n", arsalan.id);
            printf("arsalan's marks is %d\n", arsalan.marks);
            printf("arsalan's fav_char is %c\n", arsalan.fav_char);
            printf("arsalan's name is: %s\n", arsalan.name);
            printf("\n");
            break;

        case 3:
            strcpy(zakir.name, "Syed Zakir");
            printf("zakir's id is %d\n", zakir.id);
            printf("zakir's marks is %d\n", zakir.marks);
            printf("zakir's fav_char is %c\n", zakir.fav_char);
            printf("zakir's name is: %s\n", zakir.name);
            printf("\n");
            break;

        default:
            break;
        }
    return 0;
}