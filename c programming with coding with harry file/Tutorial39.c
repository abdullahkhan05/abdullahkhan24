#include <stdio.h>
#include <string.h>
union students
{
    int id;
    int marks;
    char fav;
    char name[34];
};


int main()

{
    union students s1,s2;
    strcpy(s1.name,"abdullah");
    s1.fav='I';
    s1.marks=45;
    s1.id=4;

    printf("the valu is %d\n",s1.id);
    printf("the valu is %d\n",s1.marks);
    printf("the valu is %c\n",s1.fav);
    printf("the valu is %s\n",s1.name);
    return 0;
}
