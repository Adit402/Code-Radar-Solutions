#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n,a;
    scanf("%d %d", &num, &n);
    a= 1 << n;
    num=num^a;
    printf("%d", num);
    return 0;
}