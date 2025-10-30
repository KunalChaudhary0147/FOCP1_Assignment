/*Q2. Construct a C program to find the HCF (Highest Common Factor) of two integers using
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
computations.*/

#include <stdio.h>

void HCF(int a, int b)
{
    if (a > b)
    {
        HCF(b, a);
        return;
    }

    else if (b % a != 0) HCF(a, b%a);

    else printf("HCF is %d", a);
}

int main ()
{
    int a, b;
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Invalid input. Please enter positive integers only.");
        return 0;
    }

    HCF(a, b);

    return 0;
}