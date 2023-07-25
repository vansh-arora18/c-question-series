// Write a program for a matchstick game being played between the computer and a user. 
// Your program should ensure that the computer always wins. Rules for the game are as follows:

// There are 21 matchsticks.
// The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
// After the person picks, the computer does its picking.
// Whoever is forced to pick up the last matchstick loses the game

#include<stdio.h>

int main()
{
    int totalMatchSticks = 21;

    while(1)
    {
        printf("total number of matchSticks left are %d\n", totalMatchSticks);

        int number ;

        printf("enter the number of matchSticks u want to pick\n");
        scanf("%d", &number);

        if(number > 4 || number < 1)
        {
            continue;
        }

        printf("computer's turn");

        int computer = 5 - number;

        printf("computer picked %d\n", computer);

        totalMatchSticks = totalMatchSticks - 5;

        if (totalMatchSticks == 1)
        {
            printf("total number of matchSticks left are %d\n", totalMatchSticks);

            printf("\n\n\n");

            printf("you loose the game\n");

            break;
        }
    }
}
