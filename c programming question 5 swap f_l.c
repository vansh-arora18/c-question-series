// C Program to swap first and last digit of a number.

// 12345
// 52341

// 9872
// 2879

// number = 12345

// first = 1     first = 1
// number = 234
// end = 5     end = number %10       12345 % 10 = end = 5

// swap = end * 10000 + number *10 + first

// 52341



// number = 2345

#include<stdio.h>
#include<math.h>

int main()
{
    int number, first, end, swap, digit, divide;
    printf("enter the number");
    scanf("%d",&number);

    digit = log10(number);  //log10(12345) = 4

    divide = pow(10, digit);  //10000

    first = number / divide; //1

    number = number % divide;  //12345%10000 = 2345

    end = number % 10; //2345 % 10 = 5

    number = number / 10;    //234

    swap = end * divide + number *10 + first;   //52341;

    printf("swap value is %d",swap);

}
