#include <stdio.h>

void func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
    array[0] = 53;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 75;
}

void func3(int arr[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()

{
    int arr[][2] = {{3, 6}, {4, 5}};
    // printf("the value is %d\n", arr[0]);
    // func(arr);
    // printf("the value is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}