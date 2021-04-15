// program to find pythagorean triplets.

// 1-10

// a^2 + b^2 = c^2

// sqrt(a^2 + b^2 ) = c


// sqrt(3*3 + 4*4)
// sqrt(9 + 16)
// sqrt(25) = 5

// 3,4,5


// sqrt(2*2 + 3*3)
// sqrt(13)
// 3.0..


#include<stdio.h>
#include<math.h>


int main()
{
    int a,b;
    float c;
    printf("enter the first value\n");
    scanf("%d",&a);
    printf("enter the second value\n");
    scanf("%d",&b);

    for(int i = a; i<=b; i++)   //2
    {
        for(int j = i; j<=b; j++) //5
        {
            c = sqrt(i*i + j*j);
            if(c == (int)c)
                printf("%d, %d, %d\n",i,j,(int)c);
        }
    }
}
