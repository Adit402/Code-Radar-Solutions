#include <stdio.h>

// Function to print binary representation of a decimal number
void print_binary(unsigned int n) {
    // Create an array to store binary digits (up to 32 bits for an unsigned int)
    int binary[32];
    int index = 0;
    
    // Special case for 0, as it directly represents binary "0"
    if (n == 0) {
        printf("0");
        return;
    }

    // Fill the binary array with binary digits
    while (n > 0) {
        binary[index++] = n % 2;
        n = n / 2;
    }

    // Print the binary digits in reverse order (since we filled the array from least significant bit to most significant bit)
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    unsigned int number;
    
    scanf("%u", &number);
    printf("Binary representation: ");
    print_binary(number);

    return 0;
}
