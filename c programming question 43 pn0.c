// Write a program to enter numbers till the user wants.
// At the end it should display the count of positive, negative and zeros entered

#include<stdio.h>

int main()
{
    int a;

    printf("how many number you want to enter\n");
    scanf("%d", &a);  //a = 5

    int positive = 0;
    int negative = 0;
    int zero = 0;

    int i = 1;

    while(i <= a)
    {
        int number;

        printf("enter the number\n");
        scanf("%d", &number);

        if(number == 0)
        {
            zero++;
        }

        else if(number > 0)
        {
            positive++;
        }

        else if(number < 0)
        {
            negative++;
        }
        i++;
    }


    printf("positive number %d\n", positive);
    printf("negative number %d\n", negative);
    printf("zero number %d\n", zero);
}
