// c program to find a number is abundant or not??

#include<stdio.h>

int main()
{
    int num, sum=0;

    printf("enter the number\n");
    scanf("%d",&num);

    for(int i=1; i<num; i++)
    {
        if(num % i == 0) //12%6 == 0
            sum = sum + i; //sum = 16
    }

    if(sum > num)
        printf("number is abundant");
    else
        printf("number is not abundant");
}
