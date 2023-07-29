// Write a program to find the range of a set of numbers entered through the keyboard.
// Range is the difference between the smallest and biggest number in the list.

#include<stdio.h>
#include<limits.h>

int main()
{
    int mini = INT_MAX;
    int maxi = INT_MIN;

    int a;

    printf("how many number you want to enter\n");
    scanf("%d", &a); //5


    int i = 1;

    while(i <= a)
    {

        int number;

        printf("enter the number\n");
        scanf("%d", &number);

        if(number < mini)
        {
            mini = number;
        }

        if(number > maxi )
            maxi = number;

        i++;
    }

    printf("range is %d\n", maxi - mini);


}
