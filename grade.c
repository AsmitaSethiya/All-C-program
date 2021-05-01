// If else ladder concept in c
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
