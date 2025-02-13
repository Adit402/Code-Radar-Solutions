#include<stdio.h>

int main(){
    int n,ctr=0;
    scanf("%d",&n);
    int i,a[n],j;
    j=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n==1){
        printf("YES");
    }
    for(i=0;i<n/2;i++){
        if(a[i]==a[j]){
            ctr++;
        }
        else{
            printf("NO");
            return 0;
        }
        j--;
    }
    if(ctr>0){
        printf("YES");
    }
    return 0;
}