#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("-1");
    } else {
        int lowestSetBit = n & -n;
        int position = 0;

        while (lowestSetBit > 1) {
            lowestSetBit >>= 1;
            position++;
        }

        printf("%d", position);
    }

    return 0;
}
