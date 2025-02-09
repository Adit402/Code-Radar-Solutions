#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,n,ctr=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<a[i+1]){
            ctr++;
        }
        else{
            printf("Not Sorted");
            break;
        }
    }
    if(ctr==n-1){
        printf("Sorted");
    }
    return 0;
}