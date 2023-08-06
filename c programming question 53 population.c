// Population of a town today is 100000. The population has increased steadily 
// at the rate of 10 % per year for last 10 years. Write a program to determine 
// the population at the end of each year in the last decade.

#include<stdio.h>

int main()
{
    int currentPop = 100000;

    int i = 1;

    while(i <=10)  //i = 2
    {
        currentPop = currentPop - currentPop * 10/100;

        printf("%d year - %d\n", i, currentPop);

        i++;
    }
}
