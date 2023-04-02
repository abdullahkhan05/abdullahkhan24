/*This program also correct this is done by me*/

// #include <stdio.h>
// #include <string.h>

// typedef struct address
// {
//     char city[100];
//     char state[100];
//     int block;
//     int house_no;
// } add;

// int main()

// {
//     add f1;
//     strcpy(f1.city, "Telengana");
//     strcpy(f1.state, "Hyderabad");
//     f1.block = 3;
//     f1.house_no = 2;

//     printf("city name is : %s\n", f1.city);
//     printf("state name is : %s\n", f1.state);
//     printf("block is : %d\n", f1.block);
//     printf("house number is : %d\n", f1.house_no);
//     printf("\n");

//     add f2;
//     strcpy(f2.city, "AP");
//     strcpy(f2.state, "Hyderabad");
//     f2.block = 6;
//     f2.house_no = 1;

//     printf("city name is : %s\n", f2.city);
//     printf("state name is : %s\n", f2.state);
//     printf("block is : %d\n", f2.block);
//     printf("house number is : %d\n", f2.house_no);
//     printf("\n");

//     add f3;
//     strcpy(f3.city, "Tamil nadu");
//     strcpy(f3.state, "Channi");
//     f3.block = 10;
//     f3.house_no = 5;

//     printf("city name is : %s\n", f3.city);
//     printf("state name is : %s\n", f3.state);
//     printf("block is : %d\n", f3.block);
//     printf("house number is : %d\n", f3.house_no);
//     printf("\n");

//     add f4;
//     strcpy(f4.city, "Maharashtra");
//     strcpy(f4.state, "Mumbai");
//     f4.block = 7;
//     f4.house_no = 3;

//     printf("city name is : %s\n", f4.city);
//     printf("state name is : %s\n", f4.state);
//     printf("block is : %d\n", f4.block);
//     printf("house number is : %d\n", f4.house_no);
//     printf("\n");

//     add f5;
//     strcpy(f5.city, "Jammu & kashmir");
//     strcpy(f5.state, "Jammu");
//     f5.block = 4;
//     f5.house_no = 6;

//     printf("city name is : %s\n", f5.city);
//     printf("state name is : %s\n", f5.state);
//     printf("block is : %d\n", f5.block);
//     printf("house number is : %d\n", f5.house_no);

//     return 0;
// }

/*This program is done by apana college*/

#include <stdio.h>

struct address
{
    int house_no;
    int block;
    char city[100];
    char state[100];
};

void printaddress(struct address add)
{
    printf("address is : %d ,%d ,%s ,%s\n", add.house_no, add.block, add.city, add.state);
}

int main()

{
    struct address adds[5];
    printf("Enter the info for person 1 : ");
    scanf("%d", &adds[0].house_no);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter the info for person 2 : ");
    scanf("%d", &adds[1].house_no);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter the info for person 3 : ");
    scanf("%d", &adds[2].house_no);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter the info for person 4 : ");
    scanf("%d", &adds[3].house_no);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter the info for person 5 : ");
    scanf("%d", &adds[4].house_no);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printaddress(adds[0]);
    printaddress(adds[1]);
    printaddress(adds[2]);
    printaddress(adds[3]);
    printaddress(adds[4]);

    return 0;
}