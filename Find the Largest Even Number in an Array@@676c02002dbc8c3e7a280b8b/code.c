#include<stdio.h>

int main(){
    int i,j=-1,n;
    scanf("%d",&n);
    int a[n];
    if(n==2){
        printf("-2");
        return 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0 && a[i]>j){
            j=a[i];
        }
    }
    printf("%d", j);
}