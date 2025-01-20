#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d", &a);
    b=~a;
    printf("%d", b);
    return 0;
}