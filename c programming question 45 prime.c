// Write a program to print all prime numbers from 1 to 300.
// (Hint : Use nested loops, break and continue)

#include<stdio.h>

int main()
{
    int last = 300;

    int flag = 0;

    printf("prime numbers are \n");

    for(int i=1; i<=last; i++)  //8
    {
        flag = 0;
        for(int j=2; j<=i/2; j++)  //2 3
        {
            if(i%j == 0)  //7%3
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
