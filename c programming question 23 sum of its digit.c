// if a five digit is input through the keyboard, write a program to calculate
// the sum of its digits.

//number = 12345

// rem = number % 10 = 12345 % 10 = 5
// sum = 5

//number = number / 10 = 1234.5 = 1234

// rem = 1234 % 10 = 4
// sum =  9
// number = number / 10 = 123.4= 123

// rem = 123 % 10 = 3
// sum = 12
// number = number / 10 = 12

// rem = 12 % 10 = 2
// sum = 14
// number = number / 10 = 1


// rem = 1 % 10 = 1
// sum = 15

// number = number / 10 = 0

#include<stdio.h>

int main()
{
    int number, sum=0, rem;

    printf("enter the number\n");
    scanf("%d", &number);

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    printf("sum is %d", sum);
    return 0;
}



