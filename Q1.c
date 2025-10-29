<<<<<<< HEAD
/*Q1. Develop a C program to check whether a given number is an Armstrong number or not,
demonstrating understanding of number manipulation and digit-based computations used in digital
verification systems.*/

#include <stdio.h>
#include <math.h>

int  armstrong(int num, int digits)
{
    if (num == 0) return 0;

    return pow(num % 10, digits) + armstrong(num / 10, digits);
}

int digit_count(int num)
{
    int count = 0;
    if (num == 0) return 0;

    return digit_count(num/10) + 1;
}

int main ()
{
    int input_num;
    printf("Enter an integer: ");
    scanf("%d", &input_num);

    int digits = digit_count(input_num);

    int new_num = armstrong(input_num, digits);

    new_num == input_num ? printf("%d is an armstrong number.", input_num) : printf("%d is not an armstrong number.", input_num);

    return 0;
=======
/*Q1. Develop a C program to check whether a given number is an Armstrong number or not,
demonstrating understanding of number manipulation and digit-based computations used in digital
verification systems.*/

#include <stdio.h>
#include <math.h>

int  armstrong(int num, int digits)
{
    if (num == 0) return 0;

    return pow(num % 10, digits) + armstrong(num / 10, digits);
}

int digit_count(int num)
{
    int count = 0;
    if (num == 0) return 0;

    return digit_count(num/10) + 1;
}

int main ()
{
    int input_num;
    printf("Enter an integer: ");
    scanf("%d", &input_num);

    int digits = digit_count(input_num);

    int new_num = armstrong(input_num, digits);

    new_num == input_num ? printf("%d is an armstrong number.", input_num) : printf("%d is not an armstrong number.", input_num);

    return 0;
>>>>>>> 259fa8b (Added all .c files)
}