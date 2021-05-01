#include<stdio.h>

int main()
{
    int i;
    double number, sum = 0;

    for ( i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);

        if (number < 0)
            break;

        sum = sum + number;    
    }

    printf("sum = %.2lf", sum);

    return 0;
}
