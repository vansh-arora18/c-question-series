// c program to calculate factorial of a number.

// 4 = 4*3*2*1 = 24

// 6 = 6*5*4*3*2*1

#include<stdio.h>

int main()
{
    int number, fac=1;

    printf("enter the number");
    scanf("%d",&number); //4

    for(int i=1; i<=number; i++)
    {
        fac = fac * i;  //fac = 24
    }

    printf("factorial is %d",fac);
}
