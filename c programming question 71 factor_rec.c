// A positive integer is entered through the keyboard, write a program to obtain the prime factors
// of the number.Modify the function suitably to obtain the prime factors recursively.

#include <stdio.h>

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

void factors_rec(int number, int i)
{
    if (number == 1)
    {
        return;
    }

    if (number % i == 0)
    {
        printf("%d, ", i);
        number = number / i;
    }
    else
    {
        i++;
    }
    factors_rec(number, i);
}

int main()
{
    int number;

    printf("enter the number:");
    scanf("%d", &number);

    // factors(number);

    int i = 2;
    factors_rec(number, i);

    return 0;
}
