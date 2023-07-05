// Using conditional operators determine :
// (1)Whether the character entered through the keyboard is a lower case alphabet or not .
// (2)Whether a character entered through the keyboard is a special symbol or not .

#include<stdio.h>

int main()
{
    char ch;

    printf("enter a character\n");
    scanf("%c", &ch);

    ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch>=91 && ch <= 96) || (ch >= 123 && ch <= 126)) ?
    printf("special symbol") : printf("not a special synmbol");
}
