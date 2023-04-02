#include <stdio.h>

int main()

{
    int a;

    float b,c;  
    
    printf("Enter 1.inches to cms,\n 2.foot to inches,\n 3.yard to sqft,\n 4.kg to pound,\n 5.kml to miles,\n 6.cms to meters,\n 7.sqft to acres,\n 8.acres to sqft,\n 9.q to quit:");
    scanf("%d",&a);
    
    printf("you have entered %d\n",a);

    switch (a)
    {
    case 1:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 2.54;
        printf("you have entered %f\n",b);
        printf("this conved to inches to cms is %1.5f\n",c,b);
        break;

    case 2:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 12.0;
        printf("you have entered %f\n",b);
        printf("this conved to foot to inches is %1.5f\n",c,b);
        break;

    case 3:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 9.000000878;
        printf("you have entered %f\n",b);
        printf("this conved to yard to sqft is %1.5f\n",c,b);
        break;

    case 4:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 2.20462262;
        printf("you have entered %f\n",b);
        printf("this conved to kg to pound is %1.5f\n",c,b);
        break;

    case 5:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 0.62137119224;
        printf("you have entered %f\n",b);
        printf("this conved to kml to miles is %1.5f\n",c,b);
        break;

    case 6:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 0.01;
        printf("you have entered %f\n",b);
        printf("this conved to  cms to meters is %1.5f\n",c,b);
        break;

    case 7:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 0.00002296;
        printf("you have entered %f\n",b);
        printf("this conved to sqft to acres is %1.5f\n",c,b);
        break;

    case 8:
        printf("Enter the number:");
        scanf("%f",&b);
        c = b * 435601.5;
        printf("you have entered %f\n",b);
        printf("this conved to acers to sqft is %1.5f\n",c,b);
        break;
   
    default:
        printf("Quit\n");
        break;
    }
    
     
    return 0;
}