// Program to find the maximum number of handshakes

#include<stdio.h>

int main()
{
    int number, max;

    printf("enter the number");
    scanf("%d",&number);

    max = (number * (number - 1) )/ 2;

    printf("maximum number of handshakes are %d",max);

    return 0;
}
