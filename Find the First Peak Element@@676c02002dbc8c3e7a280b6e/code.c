#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            printf("%d",a[i]);
            break;
        }
    }
    return 0;
}