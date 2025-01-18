#include <stdio.h>
#include<math.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r,b;
    float a;
    scanf("%d", &r);
    b=pow(r,2);
    a=(float)(b*3.14);
    printf("Area: %.2f", a);
    return 0;
}