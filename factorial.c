#include<stdio.h>

int main()
{
   int num;
   int factorial = 1;

   printf("Enter the num value: ");
   scanf("%d", &num);

   while (num > 0)
   {
       factorial = factorial * num;
       num--;
   }
   printf("Factorial is: %d", factorial);

   return 0;

}
