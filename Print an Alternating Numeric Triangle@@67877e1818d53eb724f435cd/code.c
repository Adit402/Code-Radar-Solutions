#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num=i%2;
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num=1-num;
        }
        printf("\n");
    }
    return 0;
}