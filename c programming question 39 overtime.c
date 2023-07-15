// Write a program to calculate overtime pay of 10 employees.
// Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. 
// Assume that employees do not work for fractional part of an hour

#include<stdio.h>

int main()
{

    int i=1;

    while(i <= 10)
    {
        int totalHours;

        printf("enter the total no of hours for employee %d\n", i);
        scanf("%d", &totalHours);

        int hours = 40;

        if(totalHours > 40)
        {
            int ans = totalHours - hours; // 48-40 = 8

            int overtimepay = ans * 12; //8* 12 = 96;

            printf("overtime pay is %d\n", overtimepay);
        }
        else
        {
            printf("0 overtime pay\n");
        }
        i++;
    }

}
