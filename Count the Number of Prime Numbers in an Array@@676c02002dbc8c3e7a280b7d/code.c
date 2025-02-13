#include<stdio.h>

int main(){
    int i,j,n,ctr=0;
    scanf("%d",&n);
    int a[n];
    for(i=2;i<n;i++){
        if(a[i]==2){
            ctr++;
        }
        else if(n%i!=0){
            ctr++;
        }
        else{
            printf("0");
            return 0;
        }
    }
    printf("%d", ctr);
    return 0;
}