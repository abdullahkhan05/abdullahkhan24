#include <stdio.h>
void arrayreverse(int array[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp= array[i];
        array[i]=array[6-i];
        array[6-i] = temp;
        
    }
    
}
void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayreverse(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    
    
    return 0;
}

