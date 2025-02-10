#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    } else {
        int lowestSetBit = n & -n;
        printf("%d", lowestSetBit);
    }
    
    return 0;
}
