#include <stdio.h>
#include <string.h>

struct driversdetails
{
    char name[35];
    int license_no;
    char route[35];
    int kms;
};

int main()

{
    int n;
    printf("      WELCOME TO TRAVEL AGENCY  \n  ");
    printf("Enter the following details:\n");
    scanf("%d", &n);
    struct driversdetails d1, d2, d3;
    switch (n)
    {
    case 1:
        printf("\n");
        printf("NAME:");
        scanf("%s", &d1.name);
        printf("license_no:");
        scanf("%d", &d1.license_no);
        printf("route:");
        scanf("%s", &d1.route);//printf("\n");
        printf("kms:");
        scanf("%d", &d1.kms);
        printf("\n");

        printf("The details of driver 1 is :\n");
        printf("The driver name is :%s\n", d1.name);
        printf("The driver license_no is :%d\n", d1.license_no);
        printf("The driver route is :%s\n", d1.route);
        printf("how much driver drive a car :%dkms\n", d1.kms);
        // break;

    case 2:
        printf("\n");
        printf("NAME:");
        scanf("%s", &d2.name);
        printf("license_no:");
        scanf("%d", &d2.license_no);
        printf("route:");
        scanf("%s", &d2.route);
        printf("kms:");
        scanf("%d", &d2.kms);
        printf("\n");

        printf("The details of driver 2 is :\n");
        printf("The driver name is :%s\n", d2.name);
        printf("The driver license_no is :%d\n", d2.license_no);
        printf("The driver route is :%s\n", d2.route);
        printf("how much driver drive a car :%d\n", d2.kms);
        // break;

    case 3:
        printf("\n");
        printf("NAME:");
        scanf("%s", &d3.name);
        printf("license_no:");
        scanf("%d", &d3.license_no);
        printf("route:");
        scanf("%s", &d3.route);
        printf("kms:");
        scanf("%d", &d3.kms);
        printf("\n");

        printf("The details of driver 1 is :\n");
        printf("The driver name is :%s\n", d3.name);
        printf("The driver license_no is :%d\n", d3.license_no);
        printf("The driver route is :%s\n", d3.route);
        printf("how much driver drive a car :%d\n", d3.kms);
        break;

    }

    return 0;
}

