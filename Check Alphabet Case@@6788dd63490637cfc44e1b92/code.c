#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    if((a<=122) || (a>=97)){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}