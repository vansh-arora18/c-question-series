// Write a function that receives marks received by a student in 3 subjects and returns
// the average and percentage of these marks.Call this function from main() and print the results in main().

#include <stdio.h>

void solve(int *aa)
{
    int a, b, c;

    printf("enter marks in three subject (out of 100)\n");
    scanf("%d %d %d", &a, &b, &c);

    *aa = (a + b + c) / 3;
}

int main()
{
    int avg = 0;

    solve(&avg);

    printf("average is %d\n", avg);
    printf("percentage is %d%", avg);

}
