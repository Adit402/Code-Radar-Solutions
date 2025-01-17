#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c", &c);
    printf("You entered: %c", c);
    return 0;
}