// the distance between two cities (in km.) is input through the keyboard. write a program to convert and
// print this distance in metres, feet, inches, and centimeters.

#include<stdio.h>

int main()
{
    float km, m, cm, ft, inch;

    printf("enter the distance between two cities(in km)\n");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;

    printf("km is equal to %f \n", km);
    printf("meter is equal to  %f \n", m);
    printf("centimeter is equal to %f \n", cm);
    printf("inches is equal to %f \n", inch);
    printf("feet is equal to %f \n", ft);

    return 0;
}
