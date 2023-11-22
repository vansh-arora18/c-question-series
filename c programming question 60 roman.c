// Write a general-purpose function to convert any given year into its Roman equivalent. 
// Use these Roman equivalents for decimal numbers: 
// 1 - I
// 5 - V
// 10 - X
// 50 - L
// 100 - C
// 500 - D
// 1000 - M.
// Example:
// Roman equivalent of 1988 is mdcccclxxxviii. 
// Roman equivalent of 1525 is mdxxv.

#include<stdio.h>

void roman(int number)
{

    while (number)
    {
        if (number >= 1000)
        {
            printf("M");
            number = number - 1000;
        }
        else if (number >= 500)
        {
            printf("D");
            number = number - 500;
        }
        else if (number >= 100)
        {
            printf("C");
            number = number - 100;
        }
        else if (number >= 50)
        {
            printf("L");
            number = number - 50;
        }
        else if (number >= 10)
        {
            printf("X");
            number = number - 10;
        }
        else if (number >= 5)
        {
            printf("V");
            number = number - 5;
        }
        else if (number >= 1)
        {
            printf("I");
            number = number - 1;
        }
    }
}

int main()
{

    int number;

    printf("enter the number\n");
    scanf("%d", &number);

    roman(number);

    return 0;
}
