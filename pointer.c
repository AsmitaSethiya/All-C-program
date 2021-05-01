#include<stdio.h>

int main()
{
    int a , b;
    int *p, *q;


    p = &a;
    q = &b;
    
    printf("enter the value of a: ");
    scanf("%d", &a);


    printf("Enter the value of b: ");
    scanf("%d", &b);

   
   int sum =  *p + *q;

    printf("sum of two number is : %d", sum);
}
