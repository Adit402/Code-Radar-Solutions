#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r,a;
    scanf("%d", &r);
    a=(float)(r*r*3.14);
    printf("Area: %.2f", r);
    return 0;
}