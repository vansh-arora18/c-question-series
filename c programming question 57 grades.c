// Write a program to find the grace marks for a student using switch. 
// The user should enter the class obtained by the student and the number of subjects he has failed in.
// Use the following logic:
// - If the student gets first class and the number of subjects he failed in is greater than 3, 
//   then he does not get any grace. Otherwise the grace is of 5 marks per subject.
// - If the student gets second class and the number of subjects he failed in is greater than 2,
//   then he does not get any grace. Otherwise the grace is of 4 marks per subject.
// - If the student gets third class and the number of subjects he failed in is greater than 1,
//   then he does not get any grace. Otherwise the grace is of 5 marks.

#include<stdio.h>

int main()
{
    int cl, sub;

    printf("enter the class and number of subject failed: \n");
    scanf("%d %d", &cl, &sub);

    switch(cl)
    {
        case 1:
            if(sub > 3)
            {
                printf("No grace marks");
            }
            else{
                printf("student get total of %d grace marks", 5*sub);
            }
            break;
        
        case 2:
            if (sub > 2)
            {
                printf("No grace marks");
            }
            else
            {
                printf("student get total of %d grace marks", 4 * sub);
            }
            break;
        
        case 3:
            if (sub > 1)
            {
                printf("No grace marks");
            }
            else
            {
                printf("student get total of 5 grace marks");
            }
            break;
        
        default:
            printf("wrong class entered");
    } 

    return 0;
}
