#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,temp,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    j=n-2;
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=1;i<n;i++){
        if(a[i]==a[i+1] && a[i]==a[i-1]){
            printf("-1");
            return 0;
        }}
    if(n=1){
        printf("-1");
    }
    printf("%d",a[j]);
    return 0;
}