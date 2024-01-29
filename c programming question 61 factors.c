// A positive integer is entered through the keyboard. Write a function to obtain the prime factors 
// of this number. 
// For example, prime factors of 24 are 2, 2, 2 and 3,
// whereas prime factors of 35 are 5 and 7

#include<stdio.h>

void factors(int number)
{
    int i = 2; // 3

    while (number > 1) // 1
    {
        if (number % i == 0)
        {
            printf("%d, ", i);
            number = number / i;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int number;

    printf("enter the number:");
    scanf("%d", &number);

    factors(number);

    return 0;
}
