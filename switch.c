#include<stdio.h>

int main()
{
    char grade;

    printf("Enter student grade for feedback: ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent! Keep it up.");
        break;

    case 'B':
        printf("Very good! Keep it up.");
        break;

    case 'C':
        printf("Good! Try improving in the next exam.");
        break;

    case 'D':
        printf(" Average! Need to work hard.");
        break;

    case 'E':
        printf("Poor! Need a lot of hard work.");
        break;

    case 'F':
        printf("Failed! You need to attend special classes after school."); 
        break;

    default:
        printf("Invalid Grade! Please enter grade from A to F.");
        break;
    }
    
    
    return 0;
}
