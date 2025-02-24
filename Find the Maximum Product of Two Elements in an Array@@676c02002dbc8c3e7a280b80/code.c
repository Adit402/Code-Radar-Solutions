#include <stdio.h>

int main(){
    int n,i,j,temp,k;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<0){
            a[i]= -a[i]
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    k=a[n-1]*a[n-2];
    printf("%d", k);
}