/*Q12. Develop a C program to find the maximum and minimum scores in an array, applying
comparative logic for ranking and analysis.*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements you want to enter: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Maximum element is: ");

    int max = array[0];
    for (int i = 1; i < n; i++) if (array[i] > max) max = array[i];
    printf("%d\n", max);

    printf("Minimum element is: ");

    int min = array[0];
    for (int i = 1; i < n; i++) if (array[i] < min) min = array[i];
    printf("%d\n", min);

    return 0;
}