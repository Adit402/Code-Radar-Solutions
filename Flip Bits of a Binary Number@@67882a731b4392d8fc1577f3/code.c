#include <stdio.h>

unsigned int flip_bits(unsigned int n) {
    return ~n;
}

int main() {
    int number;
    scanf("%u",&number);
    printf("%u", flip_bits(number));

    return 0;
}
