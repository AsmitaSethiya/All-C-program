#include<stdio.h>

int main()
{
    int number[10];
    int largest = 0;


    // taking input from user
    for( int i=0; i<10; i++)
    {
        printf("Enter the numbers of index at %d: ", i);
        scanf("%d", &number[i]);

    }
 
     //check largest number
     for (int i =0; i< 10; i++)
    {
        if (number[i] > largest)
        largest=  number[i];

    }
    
    // print largest number
    printf("\n largest number is : %d\n", largest);

    printf("The array is: \n");

    // print the array element
    for(int i=0; i<10; i++)
    {
        printf("%d\n", number[i]);
    }

   

     return 0;
}
