#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n); 
    int a[n],i,b[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int sum=0,j;
    for(i=0;i<n;i++){
        while(a[i]>0){
            j=a[i]%10;
            sum+=j;
            a[i]=a[i]/10;
        }
        b[i]=sum;
        sum=0;
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}