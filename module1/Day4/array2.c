#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int min, max;

    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0]; 

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Smallest value: %d\n", min);
    printf("Largest value: %d\n", max);

    return 0;
}
