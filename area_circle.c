#include <stdio.h>
#include <unistd.h>

int main() {

    printf("**************************\n");
    printf("---------WELCOME----------\n");
    printf("**************************\n");

    const float PI = 3.14;
    float radius;
    flaot area;

    printf("Enter the radius of the circle in centimetre: ");
    scanf("%f", &radius);

    printf("\nCalculating radius...\n");
    usleep(300000);

    area = PI * radius * radius;

    printf("The area of the circle is: %.2f sq. cm.\n\n", area);
    usleep(300000);

    printf("**************************\n");
    printf("--------THANK YOU---------\n");
    printf("**************************\n");

    return 0;
}
