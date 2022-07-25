// if cost price and selling price of an item is input through the keyboard, write a
// program to determine whether the seller has made profit or incurred loss. Also
// determine how much profit he made or loss he incurred.

#include<stdio.h>

int main()
{
    float cp,sp,l,p;

    printf("enter the cost price and selling price\n");
    scanf("%f %f", &cp, &sp);

    p = sp - cp; // 100 - 100 = 0
    l = cp - sp; // 100 - 100 = 0

    if(p > 0)
    {
        printf("profit is %f", p);
    }
    if(l > 0)
    {
        printf("loss is %f", l);
    }
    if(p == 0)
    {
        printf("no loss no profit");
    }

    return 0;


}
