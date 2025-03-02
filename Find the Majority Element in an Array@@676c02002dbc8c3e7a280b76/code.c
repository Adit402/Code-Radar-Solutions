#include<stdio.h>

int main(){
    int i,j,n,max, ctr=0,num=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        max=a[i];
        for(j=0;j<n;j++){
            if(a[j]==max){
                ctr++;
            }
        }
        if(ctr>num){
            num=ctr;
        }
        else if(num==ctr){
            num=-1;
        }
        printf("%d", num);
        ctr=0;
    }
    return 0;
}