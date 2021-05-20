// c program to swap even position value with odd position value in array

#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int temp;

    for(int i=0; i<9; i+=2)
    {
        temp = arr[i]; //temp = 1
        arr[i] = arr[i+1];   //arr[0] = 2
        arr[i+1] = temp; //arr[1] = 1
    }

    for(int i=0; i<10; i++)
        printf("%d\n",arr[i]);
}
