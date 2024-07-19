// Write a function to compute the distance between two points and
// use it to develop another function that will compute the area of the
// triangle whose vertices are A(x1, y1),B(x2, y2), and C(x3, y3).
// Use these functions to develop a function which returns a value 1 if the point(x, y)
// lies inside the triangle ABC, otherwise returns a value 0.

#include <stdio.h>
#include <math.h>

// int check(float area1, float area2, float area3, float area)
// {
//     float res = (area - (area1 + area2 + area3));

//     if (res == 0 || res < 0.0001)
//         return 1;
//     else
//         return 0;
// }

float distance(int a1, int a2, int b1, int b2)
{
    float dist = sqrt(pow((a2 - a1), 2.0) + pow((b2 - b1), 2.0));
    return dist;
}

void area_triangle(float a, float b, float c, float *pt)
{
    float S = (a + b + c) / 2.0;

    *pt = sqrt((S * (S - a) * (S - b) * (S - c)));
}

int main()
{
    float x1, y1, x2, y2, x3, y3;

    printf("enter the value of x1\n");
    scanf("%f", &x1);

    printf("enter the value of y1\n");
    scanf("%f", &y1);

    printf("enter the value of x2\n");
    scanf("%f", &x2);

    printf("enter the value of y2\n");
    scanf("%f", &y2);

    printf("enter the value of x3\n");
    scanf("%f", &x3);

    printf("enter the value of y3\n");
    scanf("%f", &y3);

    float a = distance(x1, y1, x3, y3);
    float b = distance(x2, y2, x1, y1);
    float c = distance(x2, y2, x3, y3);

    float area = 0.0;

    area_triangle(a, b, c, &area);

    printf("area is %f\n", area);

    // float x, y;

    // printf("enter the value of x\n");
    // scanf("%f", &x);

    // printf("enter the value of y\n");
    // scanf("%f", &y);

    // float d = distance(x3, y3, x, y);
    // float e = distance(x1, y1, x, y);
    // float f = distance(x2, y2, x, y);

    // float area1 = 0.0;
    // float area2 = 0.0;
    // float area3 = 0.0;

    // area_triangle(a, d, e, &area1);
    // area_triangle(d, c, f, &area2);
    // area_triangle(e, b, f, &area3);

    // printf("area1 is %f\n", area1);
    // printf("area2 is %f\n", area2);
    // printf("area3 is %f\n", area3);

    // int ans = check(area1, area2, area3, area);

    // if (ans == 1)
    //     printf("point lies inside the triangle");
    // else
    //     printf("point lies outside the triangle");
}
