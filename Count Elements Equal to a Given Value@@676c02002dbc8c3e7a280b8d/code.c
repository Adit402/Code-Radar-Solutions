#include<stdio.h>
int main(){
    int i,n,j,count=0;
    scanf("%d %d", &n, &j);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]==j){
            count++;
        }
    }
    printf("%d", count);
}