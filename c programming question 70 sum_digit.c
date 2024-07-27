// A 5 - digit positive integer is entered through the keyboard, write a recursive
// and a non - recursive function to calculate sum of digits of the 5 - digit number.

#include <stdio.h>

int sum_normal(int number)
{
    int sum = 0;

    while (number != 0)
    {
        int num = number % 10;

        sum = sum + num;

        number = number / 10;
    }

    return sum;
}

int sum_rec(int number)
{
    if(number == 0)
    {
        return 0;
    }

    int num = number % 10;

    number = number / 10;

    return num + sum_rec(number);
}

int main()
{
    int number;

    printf("enter the number\n");
    scanf("%d", &number);

    int sum = sum_rec(number);

    printf("sum of the number is %d", sum);
}
