#include<stdio.h>

int main()
{
    long n;
    int count = 0;

    printf("Enter an integer value: ");
    scanf("%d", &n);

    while( n != 0)
    {
        n /= 10;
        count++;

    }

     printf("Number of digits: %d", count); 
     return 0;
}
