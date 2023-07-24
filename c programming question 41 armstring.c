// Write a program to print out all Armstrong numbers between 1 and 500.
// If sum of cubes of each digit of the number is equal to the number itself, 
// then the number is called an Armstrong number.


#include<stdio.h>

int main()
{

    int i = 1;
    while(i <= 500)
    {
        int number = i;
        int originalNumber = number;

        int sum = 0;

        while (number > 0)
        {
            int rem = number % 10;         // 153%10 = 3
            sum = sum + (rem * rem * rem); // sum = 27;
            number = number / 10;          // 15
        }

        if (originalNumber == sum)
        {
            printf("armstrong number is %d \n", originalNumber);
        }


        i++;
    }
}
