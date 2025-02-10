#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int lowestSetBit = n & -n;

    printf("The lowest set bit of %d is: %d\n", n, lowestSetBit);
    
    return 0;
}
