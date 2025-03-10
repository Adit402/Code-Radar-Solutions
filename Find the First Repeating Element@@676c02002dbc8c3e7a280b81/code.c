#include<stdio.h>

int main(){
    int i,j,n,ctr,num=0;
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
            else{
                num++;
            }
        }
    }
    if(num>=n-2){
        printf("-1");
    }
    return 0;
}