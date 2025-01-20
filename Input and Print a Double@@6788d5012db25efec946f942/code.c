#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double f;
    scanf("%lf", &f);
    printf("You entered: %.4lf", f);
    return 1;
} 