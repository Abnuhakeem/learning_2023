#include <stdio.h>

int main()
{
    int arr[100]; 
    int n, i;
    int evenSum = 0, oddSum = 0, difference;

    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 == 0)
        {
            evenSum += arr[i]; 
        }
        else
        {
            oddSum += arr[i]; 
        }
    }

    difference = evenSum - oddSum;

    printf("Sum of even-indexed elements: %d\n", evenSum);
    printf("Sum of odd-indexed elements: %d\n", oddSum);
    printf("Difference: %d\n", difference);

    return 0;
}
