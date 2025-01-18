#include <stdio.h>
#include<math.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r,b;
    float a;
    scanf("%f", &r);
    b=pow(r,2);
    a=(b*3.14);
    printf("Area: %.2f", a);
    return 0;
}