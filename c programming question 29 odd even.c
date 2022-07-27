// Any integer is input through the keyboard. Write a program to find out whether it
// is an odd number or even number.

#include<stdio.h>

int main()
{
    int number;

    printf("enter the number\n");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("even number\n");
    }
    if(number % 2 == 1)
    {
        printf("odd number\n");
    }

    return 0;
}
