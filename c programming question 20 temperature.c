// Temperature of a city in fahrenhiet degrees is input through
// the keyboard. Write a program to convert this temperature into
// centigrade degrees.

#include<stdio.h>

int main()
{
    float cent, fah;

    printf("enter the temperature in fah\n");
    scanf("%f", &fah);

    cent = (5 * (fah - 32)) / 9;

    printf("temperature in centigrade is %f", cent);

    return 0;

}
