// the length and breath of a rectangle and radius of a circle are input through 
// the keyboard. write a program to calculate the area and perimeter of the rectangle,
// and the area and circumference of the circle.


#include<stdio.h>

int main()
{
    int l, b, r;
    float areaC, cirC, areaR, perR;

    printf("enter the length and breath of rectangle\n");
    scanf("%d %d", &l, &b);

    printf("enter the radius of circle \n");
    scanf("%d", &r);


    areaC = 3.14 * r * r;
    cirC = 2 * 3.14 * r;

    areaR = l * b;
    perR = 2 * (l + b);

    printf("area of circle %f\n", areaC);
    printf("circumference of circle %f\n", cirC);

    printf("area of rectangle %f\n", areaR);

    printf("perimeter of rectangle %f", perR);

    return 0;



}
