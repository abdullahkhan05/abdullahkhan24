/*This program is to show that the lowercase vowels changed to uppercase vowels*/

// #include <stdio.h>
// #include <stdio.h>

// int main()

// {
//     char str[100];
//     printf("Enter the lowercase to change the uppercase vowels : ");
//     scanf("%s", &str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             str[i] = str[i] - 32;
//         }
//     }

//     printf("The uppercase vowel is : %s\n", str);

//     return 0;
// }

/*This program is to show that the lowercase changed to uppercase */

// #include <stdio.h>
// #include <string.h>

// int main()

// {
//     char str[100];
//     printf("Enter the lowercase to change the uppercase character : ");
//     scanf("%s", &str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }

//     printf("The uppercase character is : %s\n", str);

//     return 0;
// }

/*This program is to remove the blank spaces*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], c;
    int i, j, len;

    printf("enter the string : \n");
    scanf("%[^\n]", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
    printf("String after removing space: %s", str);
}
