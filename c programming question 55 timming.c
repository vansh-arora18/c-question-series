// Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight

#include<stdio.h>

int main()
{
    for(int i=0; i<=23; i++)
    {
        if(i == 0)
        {
            printf("12 Midnight\n");
        }

        else if(i < 12)
        {
            printf("%d AM\n", i);
        }

        else if( i == 12)
        {
            printf("12 Noon\n");
        }

        else{
            printf("%d PM\n", i % 12);
        }
    }

    return 0;
}
