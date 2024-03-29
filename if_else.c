#include <stdio.h>

int main() {

    // Code challenge solution

    float bill, tax, totalBill, netPayableAmount;

    printf("-----------------------------------");
    printf("------------ Welcome --------------");
    printf("-----------------------------------\n\n");

    printf("Enter bill: ");    // User input 
    scanf("%f", &bill);

    tax = bill * 5/100;    // Calculating tax

    totalBill = bill + tax;    // Calculating total bill 

    // If the total bill is greater than or equal to Rs. 1000 then apply 10% discount. 
    if (totalBill >= 1000) {
        netPayableAmount = totalBill * 0.9;
        printf("Net payable amount after discount: %.2f", netPayableAmount);
    } else {     // Else don’t apply for a discount. 
        netPayableAmount = totalBill;
        printf("Net payable amount: %.2f", netPayableAmount);
    }

    return 0;
}
