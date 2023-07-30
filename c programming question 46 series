// Write a program to add first seven terms of the following series

// 1/1! + 2/2! + 3/3!

// using a for loop:

#include<stdio.h>

int main()
{
    float sum = 0;

    for(int i=1; i<=7; i++) //2
    {
        float fact = 1;

        for(int j=1; j<=i; j++) //i=4
        {
            fact = fact * j;  //fact = 24
        }

        sum = sum + i/fact;
    }

    printf("sum of series %f", sum);

    return 0;
}
