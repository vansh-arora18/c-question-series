// Given three variables x, y, z write a function to circularly shift their values to
// right.In other words if x = 5, y = 8, z = 10, after circular shift x = 10, y = 5, z = 8.
// Call the function with variables a, b, c to circularly shift values.

#include <stdio.h>

void circular_shift(int *a, int *b, int *c)
{
    int temp = *c;

    *c = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int x, y, z;

    printf("enter the value of x\n");
    scanf("%d", &x);

    printf("enter the value of y\n");
    scanf("%d", &y);

    printf("enter the value of z\n");
    scanf("%d", &z);

    circular_shift(&x, &y, &z);

    printf("after circular shift \n");
    printf("value of x = %d\n", x);
    printf("value of y = %d\n", y);
    printf("value of z = %d\n", z);
}
