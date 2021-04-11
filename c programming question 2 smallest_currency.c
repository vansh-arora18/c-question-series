// Consider a currency system in which there are notes of seven denominations namely, Rs. 1, Rs. 2,Rs. 5,
// Rs. 10, Rs. 50, Rs.100. if a sum of Rs. N is entered through the keyboard, write a program to compute
// the smallest number of notes that will combine to give Rs. N  ...

// 100 - hun
// 50 - fif
// 10 - ten
// 5 - five
// 2 - two
// 1 - one

#include<stdio.h>

int main()
{
    int amount, hun, fif, ten, five, two, one, total;
    printf("enter the amount\n");
    scanf("%d",&amount);

    hun = amount / 100;         //859/100 = 8
    amount = amount % 100;          //859%100 = 59

    fif = amount / 50;         //59/50 = 1
    amount = amount % 50;      //59%50 = 9

    ten = amount / 10;    //9/10 == 0
    amount = amount % 10;    //9%10  == 9 

    five = amount / 5;     //9/5 == 1
    amount = amount % 5;   // 9%5 == 4

    two = amount / 2;       //4/2 == 2
    amount = amount % 2;    //4%2 ==0

    one = amount / 1;     //0/1== 0
    amount = amount %1;  //0%1 == 0


    total = hun + fif + ten + five + two + one;
    printf("smallest total number of notes %d\n", total);

}
