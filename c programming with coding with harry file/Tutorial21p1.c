#include <stdio.h>
void TOH(int a,char b,char c,char d)
{
    if (a==1)
    {
        printf("disk move %d from %c is %c\n",a,b,d);
    }
    else
    {
        TOH(a-1,b,d,c);
        printf("disk move %d from %c is %c\n",a,b,d);
        TOH(a-1,c,b,d);
        
    }
    
    
}

int main()

{
    int num;
    char b='A',c='B',d='C';
    printf("enter how many disk you want:");
    scanf("%d",&num);
    TOH(num,b,c,d);

    return 0;
}