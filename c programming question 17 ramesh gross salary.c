//ramesh's basic salary is input through the keyboard. His dearness allowance is 40% 
//basic salary, and house rent allowance is 20% of basic salary. write a program
// to calculate his gross salary.



#include<stdio.h>

int main()
{
    float bp, da, hra, grpay; 

    printf("enter the basic salary\n");
    scanf("%f", &bp);

    da = 0.4 * bp;
    hra = 0.2 * bp;

    grpay  = bp + da + hra;

    printf("gross salary is equal to %f", grpay);
}
