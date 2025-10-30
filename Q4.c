/*Q4. Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management.*/

#include <stdio.h>

void pointer(int a, int b)
{
    int *p1 = &a;
    int *p2 = &b;

    (*p1)=(*p1)+(*p2);
    (*p2)=(*p1)-(*p2);
    (*p1)=(*p1)-(*p2);

    printf("After swapping using pointers: a = %d, b = %d\n", *p1, *p2);
}

void bitwise(int a, int b)
{
    a=a^b;
    b=a^b;
    a=a^b;

    printf("After swapping using bitwise operations: a = %d, b = %d\n", a, b);
}

void arithmetic(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping using arithmetic operations: a = %d, b = %d\n", a, b);
}

void temp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    
    printf("After swapping using temporary variable: a = %d, b = %d\n", a, b);
}

int main()
{
    int a, b;
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    temp(a, b);
    printf("\n");

    printf("Before swapping: a = %d, b = %d\n", a, b);

    arithmetic(a, b);
    printf("\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);

    bitwise(a, b);
    printf("\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);

    pointer(a, b);
    printf("\n");

    return 0;
}