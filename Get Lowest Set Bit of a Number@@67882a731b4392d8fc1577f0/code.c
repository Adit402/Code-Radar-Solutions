#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int lowestSetBit = n & -n;

    printf("%d", lowestSetBit);
    
    return 0;
}
