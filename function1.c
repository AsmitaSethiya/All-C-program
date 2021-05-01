#include<stdio.h>

// function declaration
void findSum(int , int);

int main()
{
    // calling function
    findSum(12, 15);    //12 and 15 are known actual parameters or actual arguments
    
    // calling function
    findSum(23, 50);  // 25 and 50 are known actual parameters or actual arguments
    
    return 0;
}

//function definition
void findSum(int number1, int number2){    // number1 and number2 known as formal parameter or formal arguments
   int sum = number1 + number2;
    printf("sum is: %d\n", sum);
}
