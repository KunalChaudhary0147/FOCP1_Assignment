/*Q10. Implement a program to find who and how many students scored “99” in the marks array,
emphasising data scanning and frequency counting.*/

#include <stdio.h>

int main()
{
    int a[10] = {10, 55, 43, 5, 99, 27, 99, 12, 99, 34};
    int count = 0;

    for(int i = 0; i < 10; i++) if(a[i] == 99) count++;
    
    printf("The number 99 appears \"%d\" times in the array.\n", count);
    return 0;
}