#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        for(j=1,j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}