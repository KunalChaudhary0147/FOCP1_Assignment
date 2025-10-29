/*Q3. Design a C program to subtract two integers without using the minus (-) operator, applying
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
embedded systems or processors.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers (a, b): ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("On subtracting, we get %d", a + (~b + 1));
    printf("On subtracting, we get %d %d", a, b);

    return 0;
}