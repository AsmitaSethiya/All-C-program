#include <stdio.h>
#include <string.h>

struct Book{
    char title[20];
    char authore[30];
    float price;
};

int main()
{
    struct Book b1, b2;
    
    strcpy(b1.title, "Akbarnama");
    strcpy(b1.authore, "Abul Fazal");
    b1.price = 750.00;
    
    printf("Book Details: \n Title: %s \n Authore: %s \n Price: %.2f \n\n", b1.title, b1.authore, b1.price);
    
    strcpy(b2.title, "Ain-i-Akbari");
    strcpy(b2.authore, "Abul Fazal");
    b2.price = 120.00;
    printf("Book Details: \n Title: %s \n Authore: %s \n Price: %.2f \n\n", b2.title, b2.authore, b2.price);
    
    return 0;

}
