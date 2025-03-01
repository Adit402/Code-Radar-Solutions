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
        for(int k=i+1;k<n;k++){
            if(a[k]+a[count]==j){
                printf("%d %d\n",a[k], a[count]);
            }
            count--;
        }
    }
}