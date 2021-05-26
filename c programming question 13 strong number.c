// c program to find a number is strong number or not??

#include<stdio.h>

int fact(int number);

int main()
{
    int number, sum=0, num, orig;

    printf("enter the number");
    scanf("%d",&number); //143

    orig = number;

    while(number)
    {
        num = number % 10; //num = 1%10 = 1
        sum = sum + fact(num); //sum = 31
        number = number / 10; //number = 1/10 = 0
    }

    if(sum == orig)
        printf("it is a strong number");
    else
        printf("it is not a strong number");
    return 0;
}


int fact(int number)
{
    int factorial=1;

    for(int i=1; i<=number; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
