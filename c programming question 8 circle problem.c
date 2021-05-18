// Given the coordinate (x, y) of center of a circle and its radius, 
// write a program that will determine whether a point lies inside the 
// circle, on the circle or outside the circle.


#include<stdio.h>
#include<math.h>

int main()
{
    int x, y, distance,x1,y1, radius;

    printf("\n\n enter the coordinates of center\n");
    printf("enter the x and y coordinate\n");
    scanf("%d %d",&x,&y);

    printf("enter the radius of the circle\n");
    scanf("%d",&radius);

    printf("enter the coordinate of points\n");
    scanf("%d %d",&x1, &y1);

    distance = sqrt(pow((x1-x),2) + pow((y1-y),2));

    if(distance > radius)
        printf("point lies outside the circle");
    
    if(distance == radius)
        printf("point lies on the circle");
    
    if(distance < radius)
        printf("point lies inside the circle");

    return 0;
}
