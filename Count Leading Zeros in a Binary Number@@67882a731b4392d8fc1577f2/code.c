#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;

    if (n == 0) {
        return 32;
    }

    for (int i = 31; i >= 0; --i) {
        if (n & (1U << i)) {
            break;  
        }
        count++;
    }

    return count;
}

int main() {
    unsigned int n;
    printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &n);

    int leadingZeros = countLeadingZeros(n);
    printf("Number of leading zeros: %d\n", leadingZeros);

    return 0;
}
