// Write a function power(a, b), to calculate the value of a raised to b.

#include<stdio.h>

void power(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= b; i++) 
    {
        ans = ans * a;
    }

    printf("value of %d  raised to %d is %d", a, b, ans);
}

int main()
{
    int a, b;

    printf("enter the value of a: \n");
    scanf("%d", &a);

    printf("enter the value of b: \n");
    scanf("%d", &b);

    power(a, b);

    return 0;
}
