#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char *temp = (char*)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    char c1, c2;
    printf("Enter the first and second char\n");
    scanf("%c\n",&c1);
    scanf("%c",&c2);
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);
    
    return 0;
}