// Write a program to produce the following output : 

// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A


#include<stdio.h>

int main()
{
    for(int i=0; i<=6; i++)  //6
    {
        for(int j=65; j<=71-i; j++)   //71-6 = 65
        {
            printf("%c", j);
        }

        for(int  k=0; k<i*2-1; k++) //12-1 = 11
        {
            printf(" ");
        }

        for(int l=71-i; l>=65; l--)  //l=65
        {
            if(l != 71)
                printf("%c", l);
        }
        printf("\n");
    }
}
