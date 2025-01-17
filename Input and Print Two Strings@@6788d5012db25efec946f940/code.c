#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100],c[100];
    scanf("%s %s", &s,&c);
    printf("You entered: %s and %s", s,c);
    return 0;
}