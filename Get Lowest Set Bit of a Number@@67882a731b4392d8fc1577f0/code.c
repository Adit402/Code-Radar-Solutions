#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("No set bits in 0\n");
    } else {
        int lowestSetBit = n & -n;
        printf("%d\n", lowestSetBit);
    }
    
    return 0;
}
