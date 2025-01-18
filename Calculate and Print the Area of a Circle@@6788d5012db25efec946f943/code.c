#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r;
    scanf("%d", &r);
    printf("Area: %d", (r*r*3.14));
    return 0;
}