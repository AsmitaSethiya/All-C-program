#include<stdio.h>

int main()
{
    int n;
    long sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum = sum + (i * i);
    }
  
     printf("Sum: %1d",sum);

     return 0;
}
