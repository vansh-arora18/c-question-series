// given three points (x1,y1), (x2, y2), (x3, y3), write a program to check if all the points fall on one straight line.


#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;

    float m,n;

    printf("enter the first coordinate\n");
    scanf("%f %f",&x1,&y1);

    printf("enter the second coordinate\n");
    scanf("%f %f",&x2,&y2);

    printf("enter the third coordinate\n");
    scanf("%f %f",&x3,&y3);

    m = (y2-y1)/(x2-x1);
    n = (y3- y2)/(x3- x2);

    if(m == n)
    {
        printf("points lie on a staright line");
    }
    else
    {
        printf("points not lie on a straight line");
    }
}
