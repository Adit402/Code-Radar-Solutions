#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,ctr=0;
    scanf("%d",&a);
    if(a==2){
        printf("Prime");
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
        else{
            ctr++;
        }
    }
    if(ctr>=a/2){
        printf("Prime");
    }
    return 0;
}