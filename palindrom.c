#include <stdio.h>

int main() {
   
    int number , reverseNumber = 0, remainder, originalNum;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
   
    originalNum = number;

    // reversed integer is stored in reversedN
    do {
        remainder = number % 10;
        reverseNumber = (reverseNumber * 10) + remainder;
        number = number / 10;
    } while (number > 0);


    // palindrome if orignalN and reversedN are equal
    if (originalNum == reverseNumber)
    {
        printf("%d is a palindrome.", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.", originalNum);
    }
    return 0;
}
