#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,sum=0;
    scanf("%d", &a);
    scanf("%d", &b);    
    printf("Sum %d", (a+b));
    return 0;
}