#include <stdio.h>

int main()
{

    FILE *fp;
    FILE *fp2;
    char string[250];
    fp = fopen("letter.txt", "r");
    fp2 = fopen("letter2.txt", "w");

    fgets(string, 250, fp);
    printf("this is myfile content:\t%s\n", string);

    fp = fopen("letter.txt", "a");
    fprintf(fp, "Thank you{{Abdullah}}for purchasing{{Table Fan}}from our outlet{{godrej outlet}}\n", "w");
    fputs("please visit our outlet{{outlet}}for any kind of problem.we plan to server you again\n", fp);
    fputs("\n", fp);

    char *newstr = string;
    newstr = (newstr, "Thanks {{Abdullah}} for purchasing {{Table Fan}} from our outlet {{godrej outlet}}.");
    fprintf(fp2, "%s", newstr);
    printf("The actual bill generated is: %s\n", newstr);

    fclose(fp);
    fclose(fp2);

    return 0;
}