#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n;
    scanf("%d %d", &num , &n);
    int bit_value=(num>>n) & 1;
    printf("%d", bit_value);
    return 0;
}