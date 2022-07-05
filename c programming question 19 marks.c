//if a marks obtained by a student in five different subjects are input through the 
//keyboard, write a program to find out the aggregate marks and percentage marks 
//obtained by the student. Assume that the maximum marks that can be obtained by a
//student in each subject is 100.

#include<stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, agg, per;

    printf("enter the marks\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    agg = m1 + m2 + m3 + m4  + m5;
    per = agg / 5;

    printf("aggregate marks %f\n", agg);
    printf("percentage marks %f\n", per);
}

