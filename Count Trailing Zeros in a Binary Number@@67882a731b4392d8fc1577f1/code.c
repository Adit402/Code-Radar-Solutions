#include <stdio.h>

int count_trailing_zeros(unsigned int n) {
    int count = 0;
    while (n > 0 && (n & 1) == 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int number;
    scanf("%d",&number);
    printf("%d", count_trailing_zeros(number));
    return 0;
}
