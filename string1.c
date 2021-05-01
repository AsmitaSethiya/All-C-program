#include<stdio.h>
#include<string.h>

int main()
{
    char str1[15];
    char str2[15];

    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);

    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2);

    strcat( str1 , str2);

    printf("%s", str1);

    
}
