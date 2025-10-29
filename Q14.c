<<<<<<< HEAD
//Q14. Develop a C program to count the number of prime numbers in an array

#include <stdio.h>

int main()
{
    int arr[10] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        int isPrime = 1;
        
        for (int j = 2; j <= arr[i]/2; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) count++; 
    }

    printf("Number of prime numbers in the array: %d\n", count);

    return 0;
=======
//Q14. Develop a C program to count the number of prime numbers in an array

#include <stdio.h>

int main()
{
    int arr[10] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        int isPrime = 1;
        
        for (int j = 2; j <= arr[i]/2; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) count++; 
    }

    printf("Number of prime numbers in the array: %d\n", count);

    return 0;
>>>>>>> 259fa8b (Added all .c files)
}