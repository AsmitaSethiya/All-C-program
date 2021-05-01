#include<stdio.h>

int main()
{
    float number;
    float sum =0;

    do{
        printf("Enter a number: ");
        scanf("%f", &number);

        sum += number;
    }
    while(number != 0);
    printf("The sum is %.2f", sum);
    
    return 0;
}
