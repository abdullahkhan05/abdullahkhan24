#include <stdio.h>

int main()

{
    int a, age;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\nenter your age \n", i);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }

        printf("good boy\n");
        printf("good boy\n");
        printf("good boy\n");
        
    }



    return 0;
}