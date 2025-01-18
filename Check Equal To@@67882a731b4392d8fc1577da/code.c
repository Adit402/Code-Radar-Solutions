#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(b=a){
        printf("True");
    }
    else{
        printf("False");
    }
    return 1;
}