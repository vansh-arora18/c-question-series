// Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) 
// cut in half parallel to its shorter sides.Thus paper of size would have dimensions 841mm x 594mm.
// Write a program to calculate and print paper sizes A0,A1, A2, ….. A8.

// A0 

// width = 1189
// height = 841

// A1 

// widht = 841
// height = 1189/2 = 594

// A2 

// width = 594
// height = 841/2

// a3


#include<stdio.h>

int main()
{
    int width = 1189,height = 841, temp;

    for(int i = 0; i<=8; i++)
    {
        printf("A%d: %d x %d\n",i, width, height);
        temp = width;
        width = height;
        height = temp/2;
    }

}
