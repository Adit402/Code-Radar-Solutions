#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,sp;
    scanf("%d",&n); 
    sp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        sp=sp-1;
        printf("\n");
    }
    return 0;
}