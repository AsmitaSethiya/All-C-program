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
            //break;
            goto my_lable;

        if ( number > 1000)
        {
            printf("Number greater than 1000 i not allowed. \n ");
            continue;
        }    

        sum = sum + number;    
    }
    
    my_lable:
    printf("sum = %.2lf", sum);

    return 0;
}
