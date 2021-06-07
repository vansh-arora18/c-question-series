//Find PI to the Nth Digit - Enter a number and have the program
// generate PI up to that many decimal places. Keep a limit to how
// far the program will go.

#include<stdio.h>
#include<string.h>

int main()
{
    float pi = 3.14159;

    char x[10] = "%.";
    char y[3];
    char z[2] = "f";

    scanf("%s",y);

    strcat(x,y);
    strcat(x,z);

    printf(x, pi);
}
