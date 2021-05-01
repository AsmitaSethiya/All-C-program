#include<stdio.h>
int main()
{
    float retailPrice;
    printf("Enter reyail Price: ");
    scanf("%f",&retailPrice);

    float payableAmount;

    if (retailPrice >= 100 && retailPrice < 500)
    {
        payableAmount = retailPrice * 0.95;
    }
    else if (retailPrice >= 500 && retailPrice < 750)
    {
        payableAmount = retailPrice * 0.9;
    }
    else if (retailPrice >= 750 && retailPrice < 1000)
    {
        payableAmount = retailPrice * 0.85;
    }
    else if (retailPrice >=1000)
    {
        payableAmount = retailPrice * 0.8;
    }
    else
    {
        payableAmount = retailPrice;
    }


  printf("Discount availed: Rs %.1f\n", retailPrice - payableAmount);

	printf("Net payable amount: Rs %.1f\n", payableAmount);

    
    return 0;
    
}
