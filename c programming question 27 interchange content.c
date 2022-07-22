// Two numbers are input through the keyboard into two locations C and D. 
// Write a program to interchange the contents of C and D.

#include<stdio.h>

int main()
{
    int C, D, A;

    printf("enter the value of C and D\n");
    scanf("%d %d", &C, &D);

    A = C;
    C = D;
    D = A;

    printf("value of c is %d and value of D is %d", C, D);

    return 0;
    
}
