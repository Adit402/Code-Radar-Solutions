#include<stdio.h>

int main(){
    int i,j,n,ctr;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        ctr=a[i];
        for(j=1;j<n;j++){
            if(a[j]==ctr){
                printf("%d", a[j]);
                return 0;
            }
        }
    }
    return 0;
}