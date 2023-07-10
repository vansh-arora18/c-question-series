// Write a program to receive value of an angle in degrees 
// and check whether sum of squares of sine and cosine of 
// this angle is equal to 1


#include<stdio.h>
#include<math.h>

int main()
{
    float angle;

    printf("enter angle in degree\n");
    scanf("%f", &angle);

    int result = sin(angle)*sin(angle) + cos(angle)*cos(angle);

    printf("result is %d", result);
}
