/*Q9. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
search and data retrieval techniques.*/

#include <stdio.h>

int main()
{
    int a[5] = {5, 64, 99, 56, 23};

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == 99)
        {
            printf("Element found at index \"%d\" and position \"%d\"", i, i + 1);
            return 0;
        }
    }
    return 0;
}