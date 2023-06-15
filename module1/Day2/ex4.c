#include <stdio.h>

#define MAX_SIZE 100

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter the elements of the array in hexadecimal format:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: 0x", i);
        scanf("%x", &arr[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }

    printf("Total number of bits set in the array: %d\n", totalSetBits);

    return 0;
}