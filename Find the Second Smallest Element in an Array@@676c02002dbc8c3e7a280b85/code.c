#include<stdio.h>

int main(){
    int n,i,num,temp,ctr=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            ctr++;
        }
    }
    if(ctr==n-1){
        printf("-1");
        return 0;
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                num=a[j];
                a[j]=a[j+1];
                a[j+1]=num;
            }
        }
    }
    temp= a[1];
    printf("%d", temp);
}