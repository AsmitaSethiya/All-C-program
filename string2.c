#include<stdio.h>
#include<string.h>

int main()
{

char str1[10] = "Asmita ";
char str2[10] = "Sethiya";


// strcat() function for concatenation the two string

strcat( str1 , str2 );
printf("%s \n", str1);

char str3[20] = "Hello";
char str4[20] = "Hello";




// strcmp() used to compare the string 
int result = strcmp( str1, str2 );
printf("result: %d\n", result);

if (result == 0)
{
    printf("Strings are equal\n");
} 
else
{
    printf("Strings are unequal\n");
}

char str5[10] = "Ram";
char str6[10] = "Sita";


//strcpy() function used to copy one string into snother string
strcpy(str5, str6);

printf("%s\n", str5);

char str7[10] = "Asmita";
int length  = strlen(str7);
printf("%d", length);



return 0;

}
