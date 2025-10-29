/*Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no
duplicates exist, applying frequency detection and data validation.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int count = 1;
    int multiple = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (multiple <= 1)
            {
                if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                count = 0;
                multiple++;
                break;
            }
            }
        }
    }

    if (count) printf("-1");

    return 0;
}