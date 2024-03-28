// Write a function that receives 5 integers and returns the sum, average and standard deviation 
// of these numbers.Call this function from main() and print the results in main().
#include<stdio.h>
#include<math.h>


void solve(int *s, int *st, int *aa)
{
    int a, b, c, d, e;

    printf("enter five numbers\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);


    *s = a + b + c + d + e;
    *aa = *s / 5;
    *st = sqrt((pow((a - *aa), 2) + pow((b - *aa), 2) + pow((c - *aa), 2) + pow((d - *aa), 2) + pow((e - *aa), 2))/5);
}

int main()
{
    int sum = 0;
    int std = 0;
    int avg = 0;

    solve(&sum, &std, &avg);

    printf("\n sum is %d", sum);
    printf("\n average is %d", avg);
    printf("\n standard deviation is %d \n", std);

    return 0;
}
