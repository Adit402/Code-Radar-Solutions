#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,n,ctr=1;
    char j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=97;j<97+n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}