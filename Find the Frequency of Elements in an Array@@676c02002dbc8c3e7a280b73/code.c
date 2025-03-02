#include<stdio.h>

int main(){
    int i,n,max, ctr=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        max=a[i];
        for(int j=0;j<n;j++){
            if(a[j]==max){
                ctr++;
            }
        }
        printf("%d %d\n", a[i], ctr);
    }
}