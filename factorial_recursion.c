#include<stdio.h>

long findFactorial(int);

int main()
{
    int num = 6;
    long factorial = 1;

    while (num > 0) {
		factorial = factorial * num;
		num--;
	}


    long result = findFactorial(6);
    printf("Factorial is: %ld\n", result);


}


long findFactorial(int num){

    if ( num > 0)
    {
        return num * findFactorial(--num);
    } 
    else {
         return 1;   
    }
}
