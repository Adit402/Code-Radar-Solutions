#include<stdio.h>
int main(){
    int i,n,j,count,sum=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &j);
    count= n-1;
    for(i=0;i<n;i++){
            if(a[i]+a[count]==j){
                printf("%d %d\n",a[i], a[count]);
            }
            count--;
    }
}