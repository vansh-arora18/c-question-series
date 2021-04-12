// if N digit number is input through the keyboard. write a program to reverse the number.


// n = 5

// number = 12345

// rev = 54321

// 8

// 12345678

// 87654321

#include<stdio.h>

int main()
{
    int n, number, num, rev=0;

    printf("enter the number of digit u want to enter \n");
    scanf("%d",&n);  //5
    printf("enter the %d digit number",n);
    scanf("%d",&number);  //12345

    for(int i =1 ; i<=n; i++)
    {
        num = number % 10;  //num = 1%10 = 1
        rev = rev * 10 + num;  //rev = 54321
        number = number / 10; //number = 1/10 = 0
    }

    printf("reverse of the digit is %d\n", rev);
}
