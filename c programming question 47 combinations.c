// Write a program to generate all combinations of 1, 2 and 3 using for loop

#include<stdio.h>

int main()
{
    for(int i=1; i<=3; i++) //i = 3
    {
        for(int j=1; j<=3; j++) //j=3
        {
            for(int k=1; k<=3; k++) //k=3
            {
                if(i != j && j != k && k != i)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
}

// 1 2 3

// 1 3 2

// 2 1 3

// 2 3 1

// 3 1 2

// 3 2 1



