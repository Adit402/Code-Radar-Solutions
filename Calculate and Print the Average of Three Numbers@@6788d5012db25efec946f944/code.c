#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    float d;
    scanf("%d %d %d", &a, &b, &c);
    d=(float)(a+b+c)/3;
    printf("Average: %.2f", d);
    return 0;
}