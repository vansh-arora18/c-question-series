// When interest compounds q times per year at an annual rate of r % for n years, the principal
// p compounds to an amount a as per the following formula
// a = p ( 1 + r / q ) nq
// Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.


#include<stdio.h>
#include<math.h>

int main()
{

    for(int i=1; i<=10; i++)
    {
        int p, r, n, q;

        printf("enter the value of p, r, n and q\n");
        scanf("%d %d %d %d", &p, &r, &n, &q);

        float a = p * pow((1 + r / q), (n * q));

        printf("value of a is %f\n", a);
    }
}

