#include<stdio.h>

int main(){
    int i,j,n,ctr=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==2 || a[i]==3 || a[i]==5){
            ctr++;
        }
        else if((a[i]%3!=0) && (a[i]%5!=0) && (a[i]%2!=0)){
            ctr++;
        }
        else{
            continue;
        }
    }
    printf("%d", ctr);
    return 0;
}