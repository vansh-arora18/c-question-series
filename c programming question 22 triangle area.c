//if length of three sides of a triangle are input through the keyboard, write a program
// to find the area of triangle

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, s, area;

    printf("enter the sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("area of triangle %f", area);

}
