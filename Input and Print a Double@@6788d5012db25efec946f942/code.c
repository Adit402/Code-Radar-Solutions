#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float f;
    scanf("%f", &f);
    printf("You entered: %.4f", f);
    return 1;
} 