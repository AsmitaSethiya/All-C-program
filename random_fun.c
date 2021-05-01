#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int randomNumber;

    srand(time(NULL));

     randomNumber = (rand() % 6) +1 ;  // generate number from 1 to 6  1, 2, 3, 4, 5, 6

    printf("Rolling the dice............\n");

    usleep(3000000);

    printf("You got: %d", randomNumber);

    return 0;
}
