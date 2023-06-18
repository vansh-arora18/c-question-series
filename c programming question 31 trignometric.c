// If value of an angle is input through the keyboard, write a program
// to print all its Trigonometric ratios.

#include<stdio.h>
#include<math.h>

int main()
{
    float degree, radian;

    printf("enter the angle in degree\n");
    scanf("%f", &degree);

    radian = (degree * 3.14)/ 180;

    printf("sin value %f \n", sin(radian));
    printf("cos value %f \n", cos(radian));
    printf("tan value %f \n", tan(radian));
    printf("cosec value %f \n", 1/sin(radian));
    printf("sec value %f \n", 1 /  cos(radian));
    printf("cot value %f \n", 1/ tan(radian));
}
