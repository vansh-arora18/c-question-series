// If the lengths of the sides of a triangle are denoted by a, b, and c,
// then area of triangle is given by

// area = sqrt(S(S-a)(S-b)(S-c))

// where, S = ( a + b + c ) / 2. Write a function to calculate the area of
// the triangle.

#include <stdio.h>
#include <math.h>

void area_triangle(float a, float b, float c, float *pt)
{
    float S = (a + b + c) / 2.0;

    *pt = sqrt((S * (S - a) * (S - b) * (S - c)));

}

int main()
{
    float a, b, c;

    printf("enter the value of a\n");
    scanf("%f", &a);

    printf("enter the value of b\n");
    scanf("%f", &b);

    printf("enter the value of c\n");
    scanf("%f", &c);

    float area = 0.0;

    area_triangle(a, b, c, &area);

    printf("area is %f", area);
}
