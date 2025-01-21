#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    if(num>0){
        printf("Positive");
    }

    else if(num<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}