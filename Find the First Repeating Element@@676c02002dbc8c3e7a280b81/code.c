#include<stdio.h>

int main(){
    int i,j,n,ctr=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                printf("%d", a[i]);
                return 0;
            }
        }
    }
}