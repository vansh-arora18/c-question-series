// If the three sides of a triangle are entered through the keyboard, write a program to check whether
// the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the 
//largest of the three sides.

// 3 4 5

// largest = 5
// sum = 3 + 4 = 7

// sum > largest 
//     triangle is valid
// else    traingle is invalid


// 9 4 7 

// largest  = 9
// sum = 4 + 7 = 11

// sum > largest 
//     triangle is valid


#include<stdio.h>

int main()
{
    int largest, sum, side1, side2, side3;
    printf("enter the three sides of triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 > side2)
    {
        if(side1 > side3)
        {
            largest = side1;
            sum = side2 + side3;
        }
        else
        {
            largest = side3;
            sum = side1 + side2;
        }
    }
    else{
        if(side2 > side3)
        {
            largest = side2;
            sum = side1 + side3;
        }
        else
        {
            largest = side3;
            sum = side1 + side2;
        }
    }
    printf("largest side %d\n",largest);
    printf("sum of the two sides %d\n",sum);

    if(sum > largest)
        printf("triangle is valid");
    else
        printf("triangle is not valid");
}
