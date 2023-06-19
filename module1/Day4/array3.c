#include <stdio.h>

int main()
{
    int arr[100]; 
    int n, i;

    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
