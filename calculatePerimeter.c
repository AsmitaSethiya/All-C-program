#include<stdio.h>
#include<unistd.h>

// function declaration
void greet();

double calculatePerimeter(double, double);

int main()
{
    // greet() function calling
    greet();

    // declaring variable
    double length, breadth;

    // taking input from user
    printf("Enter the length of rectangle:\n");
    scanf("%lf", &length);

    printf("Enter the breadth of rectangle:\n");
    scanf("%lf", &breadth);


    printf("please wait perimeter of rectangle is calculating..................\n");
    usleep(2000000);

    // calculatePerimeter function calling
    double result = calculatePerimeter( length, breadth);
    printf("The perimeter of a given rectangle is: %.3lf\n", result);
    
    return 0;

}


    // definition of greet function
    void greet(){
        printf("-------------------------------------\n");
        printf("**************Welcome****************\n");
        printf("-------------------------------------\n");

    }

    // definition of calculatePerimeter function
    double calculatePerimeter(double length, double breadth){
        double P = 2*(length + breadth);
        return P;

    }
