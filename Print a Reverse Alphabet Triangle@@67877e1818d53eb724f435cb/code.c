#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j<n-i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    return 0;
}