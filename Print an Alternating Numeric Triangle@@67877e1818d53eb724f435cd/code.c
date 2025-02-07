#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num=1-num;
        }
        printf("\n");
    }
    return 0;
}