// write a program to recieve an integer and find its octal equivalent.

// 300

// 454


#include<stdio.h>
#include<math.h>

int main()
{
    int number, oct=0, num,i=0;

    printf("enter the decimal number to find its octal\n");
    scanf("%d",&number);

    while(number != 0)
    {
        num = number % 8;    //4%8=4
        oct = oct + num * pow(10,i);     //oct = 454
        number = number / 8;   //4/8=0
        i++;
    }

    printf("octal value is %d", oct);
}
