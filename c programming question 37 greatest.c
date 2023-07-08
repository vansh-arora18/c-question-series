// Write a program to find the greatest of the three numbers
// entered through the keyboard.Use conditional operators.


#include<stdio.h>

int main()
{
    int a, b, c;

    printf("enter the three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    int ans = (a>b?(a>c?a:c):(b>c?b:c));

    printf("greatest number is %d", ans);
}
