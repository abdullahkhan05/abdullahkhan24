#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int GeneratingRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()

{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("WELCOME TO ROCK, PAPER, SCISSOR\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player's Turn:\n");
        printf("Enter 1 for rock\n  2 for paper\n  3 for scissor\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("YOU chose :%c\n\n", playerchar);

        printf("computer's Turn:\n");
        printf("Enter 1 for rock\n  2 for paper\n  3 for scissor\n");
        temp = GeneratingRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose :%c\n\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("CPU got it!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("game is draw!\n");
        }
        else
        {
            playerscore += 1;
            printf("YOU got it!\n");
        }
        printf("YOU :%d\n CPU :%d\n\n", playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("You win the game\n");
    }
    else if (playerscore < compscore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf("game is draw\n");
    }

    return 0;
}