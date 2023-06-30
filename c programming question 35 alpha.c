// Using conditional operators determine : 
// (1)Whether the character entered through the keyboard is a lower case alphabet or not .
// (2)Whether a character entered through the keyboard is a special symbol or not .

#include<stdio.h>

int main()
{
    char ch;

    printf("enter a charcter");
    scanf("%c", &ch);

    (ch >= 97 && ch <= 122) ? printf("lowercase character") : printf("not a lowercase character");
}
