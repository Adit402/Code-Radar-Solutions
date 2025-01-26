#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n;
    scanf("%d %d", &num,&n);
    if(num>n){
        printf("Profit");
    }
    else if(num==n){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}