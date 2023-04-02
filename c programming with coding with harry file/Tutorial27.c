#include <stdio.h>

int main()

{
        char a = '2';
        char *ptra = &a;
        printf("%d\n", ptra);

        ptra--;
        printf("%d\n", ptra);
        printf("%d", ptra-2);

    // int arr[] = {4, 5, 6, 7, 8, 9};
    // printf("%d\n", arr[3]);
    // printf("%d\n", &arr[2]);
    // printf("%d\n", arr + 2);
    // printf("%d\n", *(&arr[1]));
    // printf("%d\n", arr[1]);
    // printf("%d\n", *(arr));
    // printf("%d\n", *(&arr[2]));
    // printf("%d\n", arr [2]);
    // printf("%d\n", *(arr + 2));
    return 0;
}