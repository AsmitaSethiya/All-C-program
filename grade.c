// If else ladder concept in c
/*
In this program we write code using c language for generate student grade depending on the student marks.

Maximum marks that can be secured by a student is 500

If marks secured by the student is :

Greater than or equal to 450 and less than or equal to 500: ‘A’ grade

Greater than or equal to 400 and below 450: ‘B’ grade

Greater than or equal to 350 and below 400: ‘C’ grade

Greater than or equal to 250 and below 350: ‘D’ grade

Greater than or equal to 150 and below 250: ‘E’ grade

Less than 150: ‘F’ grade

Allow user to input his total marks secured out of 500
*/
#include<stdio.h>
int main()
{
    int marks;

    printf("Enter the sudent marks : ");
    scanf("%d", &marks);

    if (marks > 500 || marks <= 1)
    {
        printf("Please enter marks between 1 to 500");
    }



    if (marks >= 450 && marks <=500)
    {
        printf("'A' Grade");
    }
    else if (marks >= 400 && marks < 450)
    {
        printf("'B' Grade");
    }
    else if (marks >= 350 && marks < 400)
    {
        printf("'C' Grade");
    }
    else if (marks >= 250 && marks < 350)
    {
        printf("'D' Grade" );
    }
    else if (marks >= 150 && marks < 250)
    {
        printf("'E' Grade");
    }
    else if (marks < 150)
    {
        printf("'F' Grade");
    }
     
    return 0;
}
