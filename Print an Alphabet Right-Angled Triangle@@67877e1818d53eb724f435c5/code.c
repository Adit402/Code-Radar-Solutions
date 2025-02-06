#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,n,ctr=1;
    char j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=122;j<122+n;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}