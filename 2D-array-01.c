#include<stdio.h>

int main()
{
    int arr1[] = { 10, 20, 30, 40, 50 };
    int arr2[] = { 11, 22, 33, 44, 55 };
    int arr3[] = { 50, 40, 30, 20, 10 };

    int arr[3][5] = {
                        { 10, 20, 30, 40, 50 },
                        { 11, 22, 33, 44, 55 },
                        { 50, 40, 30, 20, 10 }

                     };

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
                  
 
}
