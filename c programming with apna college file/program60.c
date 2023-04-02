#include <stdio.h>

typedef struct BankAccount
{
    int account_no;
    char name[100];
}acc;


int main()

{
    acc acco1 = {123,"abdullah"};
    acc acco2 = {124,"hajira"};
    acc acco3 = {125,"kulsum"};
    printf("account no : %d\n",acco1.account_no);
    printf("name : %s\n",acco1.name);
    printf("\n");
    
    printf("account no : %d\n",acco2.account_no);
    printf("name : %s\n",acco2.name);
    printf("\n");

    printf("account no : %d\n",acco3.account_no);
    printf("name : %s\n",acco3.name);
    

    return 0;
}