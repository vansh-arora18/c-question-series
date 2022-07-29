// write a program to find absolute value of a number entered through the keyboard.

#include<stdio.h>

int main()
{
    int number;

    printf("enter the number\n");
    scanf("%d", &number); // -5

    if(number < 0)
    {
        number = number * -1;
    }

    printf("absolute value is %d", number);

    return 0;
}
