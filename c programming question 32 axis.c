// Given a point(x, y), write a program to find out
// if it lies on the X - axis, Y - axis or on the origin

#include<stdio.h>

int main()
{
    float x, y;

    printf("enter the value of x and y:\n");
    scanf("%f %f", &x, &y);

    if(x == 0 && y == 0)
    {
        printf("point - origin");
    }
    if( x != 0 && y == 0)
    {
        printf("point - x axis");
    }
    if( x == 0 && y != 0)
    {
        printf("point - y axis");
    }
}
