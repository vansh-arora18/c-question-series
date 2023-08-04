// The natural logarithm can be approximated by the following series.

// x-1/x + 1/2 (x-1/x)2 + 1/2 (x-1/x)3 + 1/2 (x-1/x)4 ...

// If x is input through the keyboard, write a program to calculate the
// sum of first seven terms of this series.

#include<stdio.h>
#include<math.h>

int main()
{
    float x;

    printf("enter the value of x\n");
    scanf("%f", &x);

    float sum = 0.0;

    sum = sum + (x-1)/x;

    for(int i=2; i<=7; i++) //i=7
    {
        sum = sum + 0.5 * pow((x-1)/x, i);
    }

    printf("sum is %f", sum);
}
