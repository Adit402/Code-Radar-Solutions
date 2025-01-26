#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    scanf("%d",&a);
    for(i=0;i==a/2;i++){
        if(a%i==0){
            printf("Not Prime");
            return 0;
        }
        else{
            continue;
        }
    }
    printf("Prime");
    return 0;
}