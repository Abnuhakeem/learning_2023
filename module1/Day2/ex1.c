#include <stdio.h>

void printExponent(double num) {
    scanf("%lf",&num);
    unsigned long long *ptr = (unsigned long long*)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Hexadecimal exponent: 0x%llX\n", exponent);
    
    // Convert exponent to binary
    printf("Binary exponent: 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x ;
    printExponent(x);
    return 0;
}