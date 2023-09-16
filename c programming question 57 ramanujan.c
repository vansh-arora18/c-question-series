// Ramanujan number is the smallest number that can be expressed as sum of two cubes
//  in two different ways.Write a program to print all such numbers up to a reasonable limit


#include<stdio.h>

int main()
{
    for(int a=1; a<=30; a++)
    {
        for(int b = 1; b<=30; b++)
        {
            for(int c = 1; c<=30; c++)
            {
                for(int d = 1; d<=30; d++)
                {
                    if(a != b && a != c && a != d && b != c && b != d && c != d)
                    {
                        int left = a*a*a + b*b*b;
                        int right = c*c*c + d*d*d;

                        if(left == right)
                        {
                            printf("%d %d %d %d\n", a, b, c, d);
                        }
                    }
                }
            }
        }
    }
}
