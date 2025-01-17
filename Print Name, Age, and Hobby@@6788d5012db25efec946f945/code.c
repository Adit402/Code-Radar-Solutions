#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100],c[100];
    int a;
    scanf("%s", &s);
    scanf("%d", &a);
    scanf("%s", &c);
    printf("Name: %s\n", s);
    printf("Age: %d\n", a);
    printf("Hobby: %s", c);
    return 0;
}