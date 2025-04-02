#include<stdio.h>
int main(){
    int i,n,j,num;
    scanf("%d", &n);
    j=n;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            num=a[i];
            a[i]=a[j];
            a[j]=a[i];
        }
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}