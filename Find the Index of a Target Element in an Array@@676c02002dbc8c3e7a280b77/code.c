#include<stdio.h>

int main(){
    int i,n,num;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("%d",i);
        }
    }
    return 0;
}