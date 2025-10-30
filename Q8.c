/*Q8. Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the
sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...*/

#include <stdio.h>

void Fibonacci(int a, int b, int n)
{
    if (n == 0) return;
    printf(" %d", a + b);
    Fibonacci(b, a + b, n - 1);
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Fibonacci Series: \n");
        return 0;
    }

    else if (n == 1)
    {
        printf("\nFibonacci Series: \n%d", 0);
        return 0;
    }

    else if (n == 2)
    {
        printf("\nFibonacci Series: \n%d %d", 0, 1);
        return 0;
    }

    else if (n > 2)
    {
        printf("\nFibonacci Series: \n%d %d", 0, 1);
        Fibonacci(0, 1, n-2);
        return 0;
    }

    else 
    {
        printf("Invalid Input");
        return 0;
    }
    
}